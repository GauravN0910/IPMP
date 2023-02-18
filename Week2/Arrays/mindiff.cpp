#include<bits/stdc++.h>
using namespace std;

int minDiff(vector<int> arr){
    sort(arr.begin(),arr.end());
    int min=arr[1]-arr[0];
    for(int i=1;i<arr.size()-1;i++){
        if(abs(arr[i+1]-arr[i])<min){
            min=abs(arr[i+1]-arr[i]);
        }
    }
    return min;
}

int main(){
    vector<int> arr={4,3,7,31,1,2,200,55,900};
    cout<<minDiff(arr);
}