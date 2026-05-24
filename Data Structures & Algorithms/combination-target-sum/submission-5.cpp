class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> cur;
        BackTracking(0, target, 0, nums, cur);
        return result;
    }
    void BackTracking(int i, int target, int total, vector<int>& nums, vector<int> sums)
    {
        if(i >= nums.size() || total > target)
            return;
        if(total == target)
        {
            result.push_back(sums);
            return;
        }
        sums.push_back(nums[i]);
        BackTracking(i, target, total + nums[i], nums, sums);
        sums.pop_back();
        BackTracking(i + 1, target, total, nums, sums);
    }
};
