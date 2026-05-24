class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int, 26>, vector<string>> result;
        for(auto& s : strs)
        {
            array<int, 26> count = {0};
            for(char c : s)
                count[c - 'a']++;
            result[count].push_back(s);
        }
        vector<vector<string>> res;
        for(auto& pair : result)
            res.push_back(pair.second);
        return res;
    }
};
