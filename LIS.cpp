class Solution {
public:
    int lb(vector<int> &ans, int val){
        int s=0, e= ans.size()-1;
        
        while(s<=e)
        {
            int mid= (s+e)>>1;
            if(ans[mid]>=val){
                e= mid-1;
            }
            else s= mid+1;
        }
        return s;
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++){
            int ind= lb(ans, nums[i]);
            if(ind==ans.size())
                ans.push_back(nums[i]);
                else ans[ind]= nums[i];
        }
        return ans.size();
    }
};