#include <bits/stdc++.h>
using namespace std;

vector<int> prod(vector<int> arr){
    int n=arr.size();
    vector<int> prefix(n);
    vector<int> suffix(n);
    vector<int> ans(n);

    prefix[0]=1;
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]*arr[i-1];
    }

    suffix[n-1]=1;
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]*arr[i+1];
    }

    for(int i=0;i<n;i++){
        ans[i]=suffix[i]*prefix[i];
    }
    return ans;
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    vector<int> ans=prod(arr);

    for(auto& i:ans){
        cout<<i<<" ";
    }
}