class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_count;
        for(int i = 0; i < s.length(); i++) s_count[s[i]]++;
        unordered_map<char, int> t_count;
        for(int i = 0; i < t.length(); i++) t_count[t[i]]++;
        if(s_count.size() != t_count.size())
            return false;
        else
        {
            for(int i = 0; i < s.length(); i++)
            {
                if(s_count[s[i]] != t_count[s[i]])
                    return false;
            }
        }
        return true;
    }
};
