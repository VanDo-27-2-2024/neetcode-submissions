class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> store;
        for (int i = 0; i < nums.size(); i++)
        {
            store.insert(nums[i]);
        }

        int count = 0;

        // for (int i = 0; i < nums.size(); i++)
        // {

        //     int tmp = 1;
        //     for (int j = 0; j < nums.size(); j++)
        //     {
        //         if (store.find(nums[i] + 1) != store.end())
        //         {
        //             tmp++;
        //             nums[i]++;
        //             continue;
        //         }

        //         if (tmp > count)
        //         {
        //             count = tmp;
        //             cout << nums[j] << "==" << count << endl;
        //             break;
        //         }
        //     }
        // }

        for (int num : nums)
        {
            int tmp = 1;
            if (store.find(num - 1) == store.end())
            {
                int cur = num;
                int tmp = 1;
                
                while(store.find(cur + 1) != store.end())
                {
                    tmp++;
                    cur++;
                }

                if (tmp > count)
                {
                    count = tmp;
                }
            }

        }

        return count;
    }
};










