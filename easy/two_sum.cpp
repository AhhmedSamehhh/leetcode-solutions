// Problem: Two Sum
// Link: https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        for (int i = 0, n = nums.size(); i < n; i++)
        {
            for (int j = i + 1, m = nums.size(); j < m; j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
