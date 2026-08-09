class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int minLength = INT_MAX;
        int n = nums.size();

        int l = 0;
        int sum = 0;

        for (int r = 0; r < n; r++) {

            sum += nums[r];

            while (sum >= target) {

                minLength = min(minLength, r - l + 1);

                sum -= nums[l];
                l++;
            }
        }

        if (minLength == INT_MAX)
            return 0;

        return minLength;
    }
};