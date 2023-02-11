#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void selection(vector<int> arr,int n){
    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

int main(){
    vector<int>arr = {5,4,2,3,8,3,92,22,4568};
    int n = arr.size();
    selection(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
