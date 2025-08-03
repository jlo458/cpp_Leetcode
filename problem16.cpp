// 3Sum closest

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
            sort(nums.begin(), nums.end());
            int closestVal = nums[0] + nums[1] + nums[2];
            int n = nums.size();

            for (int i = 0; i < n - 2; i++) {
                if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates

                int left = i + 1;
                int right = n - 1;

                while (left < right) {
                    int sum = nums[i] + nums[left] + nums[right];

                    if (abs(closestVal - target) >= abs(sum - target)) {
                        closestVal = sum;
                    }

                    if (sum < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }

            return closestVal;
    }
};
