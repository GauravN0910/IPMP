#include<bits/stdc++.h>
using namespace std;

void prefsufsum(vector<int> arr){
    int n=arr.size();
    int sum=0;
    int leftsum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    for(int i=0;i<n;i++){
        if(leftsum*2==sum-arr[i]){
            cout<<i<<" ";
        }
        leftsum+=arr[i];
    }
}

int main(){
    vector<int> arr={1,2,3,4,5,0,0,0,5,4,3,2,1};
    prefsufsum(arr);
}