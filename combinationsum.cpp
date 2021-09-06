class Solution {
public:
    void solve(int ind, vector<int>& candidates, int target, vector<int> &ds, vector<vector<int>> &ans){
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        if(ind==candidates.size())
            return;
        for(int i= ind; i<candidates.size(); i++){
            if(candidates[i]<=target){
                ds.push_back(candidates[i]);
                    solve(i, candidates, target-candidates[i], ds, ans);
                ds.pop_back();
            }
            else break;
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        vector<int> ds;
        solve(0, candidates, target, ds, ans);
        return ans;
    }
};