class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> tmp;

        vector<vector<int>> store(nums.size() + 1);
        vector<int> ans;


        for (int i : nums) {
            tmp[i]++;
        }

        for (const auto& e : tmp) {
            store[e.second].push_back(e.first);
        }

        int count = 0;

        for (int i = nums.size(); i > 0; i--) {
            
            if (count == k) {
                return ans;
            }

            // if (store[i] == 0) {
            //     continue;
            // }

            for (auto j : store[i]) {
                ans.push_back(j);
                count++;
            }
        }

        return ans;



        
    }
};
