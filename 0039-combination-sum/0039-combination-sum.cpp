class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>> ans;
      vector<int> ar1;
      help(candidates,ans,ar1,target,0);
      return ans;
    }
    void help(vector<int>& arr,vector<vector<int>>& ans,vector<int>& ar1, int target,int k){
        if(target==0){
            ans.push_back(ar1);
            return;
        }
        if(k>=arr.size()){
            return;
        }
        if(arr[k]<=target){
            ar1.push_back(arr[k]);
            help(arr,ans,ar1,target-arr[k],k);
            ar1.pop_back();
        }
        help(arr,ans,ar1,target,k+1);
        return;
    }
};