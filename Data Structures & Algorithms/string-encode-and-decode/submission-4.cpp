class Solution {
public:

    // <leng>#<string>
    string encode(vector<string>& strs) {
        string res;

        for (auto str : strs) {
            res += to_string(str.length()) + "#" + str;
        }

        return res;
    }

    vector<string> decode(string s) {

        vector<string> res;

        string len;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '#')
            {
                int leng;
                i++;
                int length = std::stoi(len);
                string str;
                for (int j = 0; j < length; j++)
                {
                    str += s[i + j]; 
                }

                res.push_back(str);

                i += length - 1;
                len = "";
                continue;
            }
            
            len += s[i];
        }

        return res;
    }
};










