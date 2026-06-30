// User function Template for C++
class Solution {
  public:
    // Function to search a given integer in a matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        bool flag = false;
        for(int i=0;i<mat.size();i++){
            bool foul =false;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==x){
                    flag = true;
                    break;
                    foul = true;;
                    
                }
            }
            if(foul){
                break;
            }
        }
        return flag;
    }
};