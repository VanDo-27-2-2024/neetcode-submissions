class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n = static_cast<int> (nums.size());

        vector<int> left(n, 1);
        vector<int> right(n, 1);
        vector<int> ans(n, 1);

        int tmp = 1;


        for (int i = 1; i < nums.size(); i++) {
            left[i] = left[i - 1] * nums[i - 1];
        }

        for (int i = nums.size() - 1; i >= 0; i--) {
            if (i == nums.size() - 1) {
                ans[i] = ans[i] * left[i];
                tmp = nums[i];
                continue;
            }

            ans[i] = tmp * left[i];
            tmp = tmp * nums[i];
        }

        return ans;
    }
};








