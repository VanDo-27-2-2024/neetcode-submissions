class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_data;

        int size = static_cast<int>(strs.size());

        for (int i = 0; i < size; i++) {
            encoded_data += to_string(strs[i].length()) + "#" + strs[i];
        }

        // cout << encoded_data;

        return encoded_data;
    }

    vector<string> decode(string s) {
        vector<string> data;
        
        int len = static_cast<int>(s.length());

        int left = 0;
        int right = 0;

        while (right < len) {

            while (s[right] != '#') {
                right++;
            }

            // int a = stoi(s[right - left]); // how to get a substring ?

            int size = stoi(s.substr(left, right - left));

            ++right;
            string tmp = s.substr(right, size);
            cout << tmp << endl;

            data.push_back(tmp);
            right+=size;
            left = right;
        }

        return data;
    }
};

















