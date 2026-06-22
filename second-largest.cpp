class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max = arr[0];
        int smax = INT_MIN;
        int n = arr.size();
        for(int i =0;i<n;i++){
            // if(i==0){
            //     continue;
            // }
            if(max<arr[i]){
                smax = max;
                max = arr[i];
            }
            else if(smax<arr[i] && arr[i]<max){
                smax = arr[i];
            }
        }
        if(smax == INT_MIN){
            return -1;
        }
        return smax;
    }
};