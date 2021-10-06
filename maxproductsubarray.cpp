class Solution {
public:
    int maxProduct(vector<int>& nums) {
       
        int currmax=nums[0];
        int currmin=nums[0];
        int maxi= nums[0];
        for(int i=1; i<nums.size(); i++)
        {
          if(nums[i]<0)
              swap(currmax, currmin);
            currmax= max(nums[i], currmax*nums[i]);
            currmin= min(nums[i], currmin*nums[i]);
            maxi= max(maxi, currmax);
                        
            
        }
        return maxi;
    }
};