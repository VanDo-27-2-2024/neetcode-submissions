class Solution {
public:




    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans = {};

        unordered_map<string, int> tmp;

        for (int i = 0; i < strs.size(); i++) {

            string test = strs[i];
            sort(test.begin(), test.end());

            if (tmp.find(test) != tmp.end()) {
                ans[tmp[test]].push_back(strs[i]);
            }
            else {
                ans.push_back({});
                ans[ans.size() - 1].push_back(strs[i]);
                tmp[test] = ans.size() - 1;
            }

        }

        return ans;
    }
};
