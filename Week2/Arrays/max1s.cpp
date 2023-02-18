#include<bits/stdc++.h>
using namespace std;

int max1s(vector<vector<bool>>& arr){
    int R=arr.size();
    int C=arr[0].size();
    int ans=0;

    int j=C-1;
    for(int i=0;i<R;i++){
        bool flag=false;
        while(j>=0 && arr[i][j]==1){
            j--;
            flag=true;
        }
        if(flag){
            ans=i;
        }
    }
    if(ans==0 && arr[0][C-1]==0){
        ans=-1;
    }
    return ans;
}

int main(){
    vector<vector<bool>> arr={{0,0,0,0},{0,0,0,0},{0,0,0,1},{0,0,1,1}};
    cout<<max1s(arr);
}