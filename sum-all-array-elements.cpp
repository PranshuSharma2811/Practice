class Solution {
  public:
    int arraySum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int count = 0;
        for(int i =0;i<n;i++){
            count+=arr[i];
        }
        return count;
    }
};