class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> store;
        int ans = 0;
        int size = static_cast<int>(nums.size());

        for (const int& a : nums) {
            store.insert(a);            
        }

        for (const int& a : nums) {

            int count = 1;

            if (store.find(a - 1) != store.end()) {
                continue;
            }

            for (int i = 0; i < size; i++) {

                // if (nums[i] == a) {
                //     // size--;
                //     continue;
                // }

                // cout << i << endl;

                if (store.find(a + count) != store.end()) {
                    count++;
                    // cout << "a: " << a << " count: " << count << endl;
                    continue;
                }

                // ans = count;
            }

            ans = max(ans, count);
        }

        return ans;
    }
};
