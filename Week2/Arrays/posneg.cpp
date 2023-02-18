#include <bits/stdc++.h>
using namespace std;

void alternate(vector<int> arr)
{
    int n=arr.size();
    int i = -1;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < 0)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    int pos = i + 1, neg = 0;

    while (pos < n && neg < pos &&
           arr[neg] < 0)
    {
        swap(arr[neg], arr[pos]);
        pos++;
        neg += 2;
    }

    for(auto& i:arr){
        cout<<i<<" ";
    }
}

int main()
{
    vector<int> arr = {-1, -2, 4, 5, 6, 2, -3, 1, -5, -3, 11};
    alternate(arr);
}