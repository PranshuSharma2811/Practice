class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        bool flag = false;
        int count = 0;
        for(int i =0;i<arr.size()-1;i++){
            if(arr[i]<=arr[i+1]){
                count++;
                continue;
            }
            else{
                return false;
            }
        }
        if(count==arr.size()-1){
            flag = true;
        }
        
        return flag;
        
    }
};