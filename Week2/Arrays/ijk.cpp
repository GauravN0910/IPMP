#include <bits/stdc++.h>
using namespace std;

void increasingTriplet(vector<int> &nums)
{
    int n = nums.size();
    if (n < 3)
    {
        cout<<"nO";
    }
    int x = INT_MAX;
    int y = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] <= x)
        {
            x = nums[i];
        }
        else if (nums[i] <= y)
        {
            y = nums[i];
        }
        else
        {
            cout << x << " " << y << " " << nums[i] << endl;
        }
    }
}

int main()
{
    vector<int> arr = {9, 1, 3, 59, 2, 3, 5};
    increasingTriplet(arr);
}