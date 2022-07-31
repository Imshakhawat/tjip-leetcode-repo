// TC: O(n*2^n)/// n refers to the number of elements in subset
// MC: O(n*2^n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void subset_generation(int curr, vector<int> &sub, vector<int> &nums, vector<vector<int>> &all_subsets)
    {

        if (curr == nums.size())
        {
            all_subsets.push_back(sub);
            return;
        }

        sub.push_back(nums[curr]);
        subset_generation(curr + 1, sub, nums, all_subsets);
        sub.pop_back();

        subset_generation(curr + 1, sub, nums, all_subsets);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {

        vector<vector<int>> all_subsets;
        std::vector<int> subs;
        if (nums.size() == 0)
        {
            return all_subsets;
        }

        subset_generation(0, subs, nums, all_subsets);

        return all_subsets;
    }
};