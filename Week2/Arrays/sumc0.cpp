#include<bits/stdc++.h>
using namespace std;

void sumczero(vector<int> arr){
    sort(arr.begin(),arr.end());
    int sum=arr[1]+arr[0];
    int x,y;
    for(int i=1;i<arr.size()-1;i++){
        if(abs(arr[i+1]+arr[i])<=abs(sum)){
            sum=abs(arr[i+1]-arr[i]);
            x=i;y=i+1;
        }
    }
    cout<<arr[x]<<" "<<arr[y];
}

int main(){
    vector<int> arr={4,-3,7,31,-1,2,200,-55,900};
    sumczero(arr);
}