#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {9,1,3,59,2,3,5};
    int n = arr.size();
    for(int i = 1; i < n; i++){
        int j = i-1;
        int temp = arr[i];
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}