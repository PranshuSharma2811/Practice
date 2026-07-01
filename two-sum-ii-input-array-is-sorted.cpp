class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        vector<int> ans;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[left]+nums[right]==target){
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
            if(nums[left]+nums[right]>target){
                right--;
            }
            if(nums[left]+nums[right]<target){
                left++;
            }
        }
        return ans;
    }
};