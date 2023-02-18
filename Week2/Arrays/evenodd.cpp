#include<bits/stdc++.h>
using namespace std;

void segregate(vector<int> arr){
    int left=0;int right=arr.size()-1;

    while(left<right){
        if(arr[left]%2==1){
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
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    segregate(arr);
}