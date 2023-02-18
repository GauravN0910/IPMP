#include<bits/stdc++.h>
using namespace std;

pair<int,int> minmax(vector<int> arr){
    int n=arr.size();
    pair<int,int> ans;
    if(n==1){
        ans.first=arr[0];
        ans.second=arr[0];
    }

    if(arr[0]>arr[1]){
        ans.first=arr[0];
        ans.second=arr[1];
    }
    else{
        ans.first=arr[0];
        ans.second=arr[1];
    }

    for(int i=2;i<n;i++){
        if(arr[i]>ans.first){
            ans.first=arr[i];
        }
        else if(arr[i]<ans.second){
            ans.second=arr[i];
        }
    }
    return ans;
}

int main(){
    vector<int> arr={2,3,4,5,1,7,3,2,11,0,4};
    pair<int,int> ans=minmax(arr);

    cout<<ans.first<<" "<<ans.second;
}