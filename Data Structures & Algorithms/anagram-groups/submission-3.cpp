class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans = {};

        unordered_map<string, vector<string>> tmp;
        for (const auto& s : strs) {
            string key = s;
            
            sort(key.begin(), key.end());
            tmp[key].push_back(s);
        }

        for (const auto [_, group] : tmp) {
            ans.push_back(group);
        }

        return ans;
    }
};
