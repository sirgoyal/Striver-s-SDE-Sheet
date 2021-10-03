class Solution {
public:
    int partition(vector<int>& nums, int l, int h){
        if(l==h)
            return l;
    int r= l+ rand()%(h-l);
        swap(nums[h],nums[r]);
        int i=l-1, j=l;
        int piv= nums[h];
        while(j<h)
        {
            if(nums[j]<=piv){
                i++;
                swap(nums[i], nums[j]);
            }
            j++;
        }
        swap(nums[i+1], nums[h]);
        return i+1;
    }
    int findKthLargest(vector<int>& nums, int k) {
        int n= nums.size();
        k= n-k;
        int lo=0;
        int hi= n-1;
        int idx;
        while(lo<=hi){
             idx= partition(nums, lo, hi);
            if(idx==k)
                break;
            if(idx>k)
                hi=idx-1;
            else lo= idx+1;
        }
        return nums[idx];
        
        
    }
};