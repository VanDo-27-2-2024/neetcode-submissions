class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int sum = 0;
        vector<int> left(nums.size(), 1);
        int tmp = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            tmp *= nums[i - 1];

            left[i] = tmp;
        }


        vector<int> right(nums.size(), 1);
        tmp = 1;
        

        for (int i = nums.size() - 2; i >= 0; i--)
        {
            tmp *= nums[i + 1];
            right[i] = tmp;
        }

        vector<int> res(nums.size(), 1);;

        for (int i = 0; i < nums.size(); i++)
        {
            res[i] = left[i] * right[i];
        }

        return res;
    }
};








