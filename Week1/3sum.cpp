#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool threesum(vector<int> nums, int target)
{
    int l, r;
    sort(nums.begin(), nums.end());
    int size = nums.size();
    for (int i = 0; i < size - 2; i++)
    {
        l = i + 1;
        r = nums.size() - 1;
        while (l < r)
        {
            if (nums[i] + nums[l] + nums[r] == target)
            {
                cout << nums[i] << " " << nums[l] << " " << nums[r] << endl;
                return true;
            }
            else if (nums[i] + nums[l] + nums[r] < target)
                l++;
            else
                r--;
        }
    }
    return false;
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

    vector<int> ans;
    int target;
    cin >> target;
    threesum(nums, target);
}