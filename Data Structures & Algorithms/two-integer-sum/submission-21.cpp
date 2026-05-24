class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> look_up;
        vector<int> result;
        for(int i = 0 ; i < nums.size(); i++)
        {
            int remainder = target - nums[i];
            if(look_up.contains(remainder))
                return {look_up[remainder], i};
            look_up[nums[i]] = i; 
        }
        return {};
    }
};
