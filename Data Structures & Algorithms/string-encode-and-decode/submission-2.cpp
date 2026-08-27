class Solution {
public:

    // <leng>#<string>
    string encode(vector<string>& strs) {
        string res;

        for (auto str : strs) {
            res += to_string(str.length());
            res += "#";
            res += str;
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
                string str;
                for (int j = 0; j < std::stoi(len); j++)
                {
                    str += s[i + j]; 
                }

                res.push_back(str);

                
                i += std::stoi(len);
                len = "";
            }
            
            len += s[i];
        }

        return res;
    }
};










