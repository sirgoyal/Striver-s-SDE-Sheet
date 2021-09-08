class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m= nums1.size();
        int n= nums2.size();
        if(n<m)
            return findMedianSortedArrays(nums2, nums1);
        
        int cut= m/2;
          int cut2= (n+m)/2 -cut;
       
        while(1){
           int l1= cut==0?INT_MIN:nums1[cut-1];
        int l2= cut2==0?INT_MIN:nums2[cut2-1];
        int r1= cut==m?INT_MAX: nums1[cut];
        int r2= cut2==n?INT_MAX:nums2[cut2];
      
        if(l1<=r2 && l2<=r1)
        {
            if((n+m)&1)
                 return (double)(min(r1, r2));
            else return ((max(l1, l2) + min(r1, r2))/2.0);

        }
            if(l1>r2)
            {
                cut--;
                cut2++;
            }
            else
            {
                cut2--;
                cut++;
            }
            
        }
        return -1.00000;
    }
};