class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> tmp;
        unordered_map<char, int> tmp1;
        
        for (auto c : s) {
            tmp[c]++;
        }

        for (auto c : t) {
            tmp1[c]++;
        }

        for (auto c : t) {
            if (tmp[c] == 0) {
                return false;
            }

            tmp[c]--;
        }

        for (auto c : s) {
            if (tmp1[c] == 0) {
                return false;
            }

            tmp1[c]--;
        }

        return true;
    }
};
