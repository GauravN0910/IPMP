#include<bits/stdc++.h>
using namespace std;

bool subarray(vector<int> arr){
    int sum=0;
    unordered_set<int> nums;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];

        if(sum==0 || nums.find(sum)!=nums.end()){
            return true;
        }
        nums.insert(sum);
    }
    return false;
}

int main(){
    vector<int> arr={1,2,3,4,5,7,-12,34};
    if(subarray(arr)){
        cout<<"Exists";
    }
    else{
        cout<<"nO";
    }
}