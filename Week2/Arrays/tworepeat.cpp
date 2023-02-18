#include <bits/stdc++.h>
using namespace std;

void tworepeat(vector<int> arr, int n)
{
    vector<int> count(n - 2);
    for (int i = 0; i < n; i++)
    {
        if (count[arr[i]] == 1)
            cout << arr[i] << " ";
        else
            count[arr[i]]++;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 1, 2};
    int n = arr.size();
    tworepeat(arr, n);
}