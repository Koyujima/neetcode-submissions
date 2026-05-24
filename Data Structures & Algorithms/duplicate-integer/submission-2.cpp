class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return false;
        vector<int> numberlist;
        numberlist.push_back(nums[0]);
        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < numberlist.size(); j++)
            {
                if(nums[i] == numberlist[j])
                    return true;
            }
            numberlist.push_back(nums[i]);
        }
        return false;
    }
};