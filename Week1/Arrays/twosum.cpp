#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map.find(target - nums[i]) != map.end())
        {
            ans.push_back(map[target - nums[i]]);
            ans.push_back(i);
        }
        map[nums[i]] = i;
    }
    return ans;
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
    int x;
    cin >> x;
    vector<int> ans;
    ans = twoSum(nums, x);
    for (auto &i : ans)
    {
        cout << i << " ";
    }
}