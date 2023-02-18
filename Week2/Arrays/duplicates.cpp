#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3,4,5,3,2,1};
    int n=arr.size();

    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }

    for(int i=0;i<n;i++){
        if(arr[i]/n>=2){
            cout<<i<<" ";
        }
    }
}