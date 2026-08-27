class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> store;
        for (int i = 0; i < nums.size(); i++)
        {
            store.insert(nums[i]);
        }

        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {

            int tmp = 1;
            for (int j = 0; j < nums.size(); j++)
            {
                if (store.find(nums[i] + 1) != store.end())
                {
                    tmp++;
                    nums[i]++;
                    continue;
                }

                if (tmp > count)
                {
                    count = tmp;
                    cout << nums[j] << "==" << count << endl;
                    break;
                }
            }
        }

        return count;
    }
};
