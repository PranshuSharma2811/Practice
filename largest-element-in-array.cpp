class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n =arr.size();
        if(n==1){
            return arr[0];
        }
        int max_i = INT_MIN;
        for(int i =0;i<n;i++){
            if(arr[i]>max_i){
                max_i = arr[i]; 
            }
        }
        return max_i;
    }
};
