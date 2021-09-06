class Solution {
public:
    string getPermutation(int n, int k) {
        string ans="";
        int fct=1;
        vector<int> nums;
        for(int i=1; i<n; i++)
        {
            fct*=i;
            nums.push_back(i);
        }
        nums.push_back(n);
        k-=1;
        while(true){
            ans+= to_string(nums[k/fct]);
            nums.erase(nums.begin() + k/fct);
            k%=fct;
            if(k==0)
            {
                for(int i=0; i<nums.size(); i++)
                {
                    ans+=to_string(nums[i]);
                }
                break;
            }
            fct/=nums.size();
        }
        return ans;
    }
};