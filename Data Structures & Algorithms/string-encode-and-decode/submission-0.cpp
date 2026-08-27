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
                leng = std::stoi(len);
                string str;
                for (int j = 0; j < leng; j++)
                {
                    str += s[i + j]; 
                }

                res.push_back(str);

                len = "";
                i += leng;
            }
            
            len += s[i];
        }

        return res;
    }
};










