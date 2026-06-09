class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int> ans;
        for(int x : a){
            ans.insert(x);
        }
        for(int c:b){
            ans.insert(c);
        }
        vector<int> result(ans.begin(), ans.end());
        return result;
    }
};