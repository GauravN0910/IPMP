#include<bits/stdc++.h>
using namespace std;

int maxSubarrayProduct(vector<int> arr)
{
    int n=arr.size();
    int maxi = arr[0];
    int mini = arr[0];
    int ans = arr[0];

    for (int i = 1; i < n; i++) {
        int temp = max({ arr[i], arr[i] * maxi,
                         arr[i] * mini });
        mini
            = min({ arr[i], arr[i] * maxi,
                    arr[i] * mini });
        maxi = temp;
        ans = max(ans, maxi);
    }
    return ans;
}

int main(){
    vector<int> arr={ 1, -2, -3, 0, 7, -8, -2 };
    cout<<maxSubarrayProduct(arr);
}