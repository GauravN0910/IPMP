#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int n = nums.size() - 1;
    int x = 0;
    for (int i = n; i > 0; i--)
    {
        if (nums[i] > nums[i - 1])
        {
            x = i;
            break;
        }
    }
    if (x == 0)
    {
        sort(nums.begin(), nums.end());
    }
    else
    {
        int swap = nums[x - 1];
        for (int j = x; j <= n; j++)
        {
            if (nums[j] - swap > 0)
            {
                int temp = nums[j];
                nums[j] = nums[x - 1];
                nums[x - 1] = temp;
            }
        }
    }
    sort(nums.begin() + x, nums.end());
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << "Next Permutation = ";
    nextPermutation(nums);
    for (auto &i : nums)
    {
        cout << i<< " ";
    }
}