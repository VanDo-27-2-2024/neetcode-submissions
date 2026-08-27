class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n = static_cast<int> (nums.size());

        vector<int> ans(n, 1);

        int prefix = 1;
        for (int i = 0; i < nums.size(); i++) {
            ans[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            ans[i] = suffix * ans[i];
            suffix *= nums[i];
        }

        return ans;
    }
};








