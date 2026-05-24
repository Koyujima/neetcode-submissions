class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> look_up;
        vector<int> result;
        for(int i = 0 ; i < nums.size(); i++)
        {
            int remainder = target - nums[i];
            if(look_up.find(remainder) != look_up.end())
            {
                result.push_back(look_up[remainder]);
                result.push_back(i);
            }
            look_up[nums[i]] = i; 
        }
        return result;
    }
};
