class Solution {
public:
    bool isValid(string s) {

        if (s.length() % 2 != 0) {
            return false;
        }
        
        stack<char> tmp;
        unordered_map<char, char> store;

        store['('] = ')';
        store['['] = ']';
        store['{'] = '}';

        for (char c : s) {

            if (store.find(c) != store.end()) {
                tmp.push(c);
                continue;
            } 
            else {
                if (tmp.empty() || c != store[tmp.top()]) {
                    return false;
                }
                else {
                    tmp.pop();
                }
            }
        }

        return  (tmp.empty() == true);
    }
};
