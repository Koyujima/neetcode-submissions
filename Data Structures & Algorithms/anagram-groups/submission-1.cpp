class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> result;
        for(int i = 0; i < strs.size(); i++)
        {
            string key = strs[i];
            sort(key.begin(), key.end());
            result[key].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto& pair : result)
        {
            res.push_back(pair.second);
        }
        return res;
    }
};
