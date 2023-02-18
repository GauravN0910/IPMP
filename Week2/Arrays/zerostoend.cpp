#include<bits/stdc++.h>
using namespace std;

void zerostoend(vector<int> arr){
    int left=0;
    int right=arr.size()-1;
    
    while(left<right){
        if(arr[left]==0){
            swap(arr[left],arr[right]);
            right--;
        }
        else{
            left++;
        }
    }
    for(auto& i:arr){
        cout<<i<<" ";
    }
}

int main(){
    vector<int> arr={3,0,1,0,44,0,65,0,0,22,0,3,0};
    zerostoend(arr);
}