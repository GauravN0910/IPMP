#include<bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]>0 && nums[i]<=n){
            int pos=nums[i]-1;
            if(nums[pos]!=nums[i]){
                swap(nums[i],nums[pos]);
                i--;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(nums[i]!=i+1){
            return i+1;
        }
    }
    return n+1;
}

int main(){
    vector<int> arr={-1,5,3,1,2,9,6,-33};
    cout<<firstMissingPositive(arr);
}