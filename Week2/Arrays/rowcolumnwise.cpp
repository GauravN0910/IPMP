#include<bits/stdc++.h>
using namespace std;

void searchnum(vector<vector<int>> arr, int x){
    int n=arr.size();
    int small=arr[0][0];int large=arr[n-1][n-1];

    if(x<small || x>large){
        cout<<"nO";
    }

    int i=0,j=n-1;
    while(i<n && j>=0){
        if(arr[i][j]==x){
            cout<<i<<" "<<j;
            break;
        }
        else if(arr[i][j]>x){
            j--;
        }
        else{
            i++;
        }
    }
}

int main(){
    vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{23,34,45,56},{123,234,345,456}};
    searchnum(arr,45);
}