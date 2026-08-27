class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int sum = 0;
        vector<int> left(nums.size(), 1);
        int tmp = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            tmp *= nums[i - 1];
            left[i] = tmp;
        }

        tmp = 1;
        vector<int> res(nums.size(), 1);

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (i == nums.size() - 1)
            {
                res[i] = left[i]; 
            }
            else
            {
                tmp *= nums[i + 1];
                res[i] = left[i] * tmp;
            }
        }

        return res;
    }
};








