#include<bits/stdc++.h>
using namespace std;

int maxRepeating(vector<int> arr, int k)
{
    int n=arr.size();
    for (int i = 0; i< n; i++)
        arr[arr[i]%k] += k;

    int max = arr[0], result = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            result = i;
        }
    }
    return result;
}

int main(){
    vector<int> arr={1,2,3,4,5,3,3,3,4,2,6,6,6,6,6,6,6,6,7,3,9};
    cout<<maxRepeating(arr,18);
}