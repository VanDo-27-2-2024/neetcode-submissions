class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;

        vector<vector<int>> ans;

        for (int i = 0; i < nums.size(); i++) {

            if( (i > 0) && (nums[i] == nums[i - 1]) ) {
                cout << i << endl;
                continue;
            }

            left = i;
            right = nums.size() - 1; 
            while (left < right) {

                if (i == left) {
                    left++;
                    continue;
                }

                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum < 0) {
                    left++;
                    continue;
                }
                else if (sum > 0) {
                    right--;
                    continue;
                }
                else if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    
                    left++;
                    right--;

                    while (nums[left] == nums[left - 1] && left < right) {
                        left++;
                    }

                    while (nums[right] == nums[right + 1] && left < right) {
                        right--;
                    }

                    continue;
                }
                
                break;

            }
        }

        return ans;
    }
};
