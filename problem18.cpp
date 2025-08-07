// My solution to 4Sum problem

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //vector<int> nums = {0,1,2,3,4,5,6,7,8};
        sort(nums.begin(), nums.end());
        vector<vector<int>> results;

        int nConst = nums.size() - 1;

        for (int n = nConst; n > 2; n--) {
            if (n < nConst && nums[n] == nums[n + 1]) continue;

            for (int i = 0; i < n - 2; i++) {
                if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates

                int left = i + 1;
                int right = n - 1;

                while (left < right) {
                    //cout << i << left << right << n;
                    long long sum = (long long)nums[i] + nums[left] + nums[right] + nums[n];
                    //cout << sum;

                    if (sum == target) {
                        results.push_back({nums[i], nums[left], nums[right], nums[n]});

                        // Skip duplicates
                        
                        while (left < right && nums[left] == nums[left + 1]) left++;
                        while (left < right && nums[right] == nums[right - 1]) right--;

                        /*

                        left++;
                        right--;*/
                    }

                    if (sum < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }

        }

        return results;
    }
};
