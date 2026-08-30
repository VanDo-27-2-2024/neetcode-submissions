class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            
            unordered_map<string, vector<string>> groups;
            


            for (const auto& s : strs) {

                int store[26] = {0};
                string tmp = "";

                for (const auto& c : s) {
                    store['z' - c]++;
                }

                for (const auto& i : store) {
                    tmp+="#";
                    tmp.append(to_string(i));
                }

                groups[tmp].push_back(s);
            }

            vector<vector<string>> ans;
            for (const auto& [_, group] : groups) {
                ans.push_back(group);
            }

            return ans;

        }
};
