#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> arr){
    int l=0;
    int r=arr.size()-1;

    for(int i=0;i<=r;){
            if(arr[i]==0){
                swap(arr[l],arr[i]);
                l++;
                i++;
            }
            else if(arr[i]==1){
                ++i;
            }
            else{
                swap(arr[i],arr[r]);
                r--;
            }
            
        }
    for(auto& i:arr){
        cout<<i<<" ";
    }
}

int main(){
    vector<int> arr={1,0,1,2,2,1,0,2,0,1,0,0,1,0,2};
    sort012(arr);
}