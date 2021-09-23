class Solution {
public:
    string longestPalindrome(string s) {
        
        int sz=0;
        string pal="";
        for(int i=0; i<s.size(); i++)
        {
            int l= i-1, r= i+1;
            while(l>=0 && r<=s.size()-1 && s[l]==s[r])
            {
                l--;
                r++;
            }
            if(r-l-1>sz){
                sz= r-l-1;
                pal= s.substr(l+1, sz);
                }
        }
        
        for(int i=0; i<s.size(); i++)
        {
            int l=i-1, r=i;
           while(l>=0 && r<=s.size()-1 && s[l]==s[r])
            {
                l--;
                r++;
            }
            if(r-l-1>sz){
                sz= r-l-1;
                pal= s.substr(l+1, sz);
                }
        }
        return pal;
    }
};