class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0LL);
        int leftSum =0;
        for(int i =0;i<n;i++){
            int rightSum = sum - nums[i] - leftSum;
            if(leftSum==rightSum){
                return i;
            }
            leftSum += nums[i];
        }

        return -1;
    }
};