#include<bits/stdc++.h>
using namespace std;

int maxDiff(vector<int> arr){
    int n=arr.size();

    int diff = arr[1] - arr[0]; 
     int min = arr[0];
     for(int i = 1; i < n; i++)
     {     
       if (arr[i] - min > diff)                             
       diff = arr[i] - min;
         
       if (arr[i] < min)
       min = arr[i];                     
     }
       
     return diff;
}

int main(){
    vector<int> arr={4,3,7,31,1,2,4,2,900};
    cout<<maxDiff(arr);
}