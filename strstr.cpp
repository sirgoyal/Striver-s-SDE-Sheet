class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0)
            return 0;
        if(needle.length()>haystack.length())
            return -1;
        int len= needle.size();
        int h=1;
        int b= 27;
        int mod= 13;
        int ndl=0;
        for(int i=1; i<len; i++)
        {
            h=(b*h)%mod;
        }
        int hs=0;
        for(int i=0; i<len; i++)
        {
            hs= ((hs*b)%mod + haystack[i])%mod;
            ndl= ((ndl*b)%mod + needle[i])%mod;
        }
        for(int i=0; i<=haystack.size()-len; i++)
        {
            if(hs==ndl)
            {
                int j=0;
                for(j=0; j<len; j++)
                {
                    if(haystack[i+j]!=needle[j])
                        break;
                }
                if(j==len)
                    return i;
            }
            if(i<haystack.size()-len)
            hs= (((hs-(haystack[i]*h)%mod)*b)%mod + haystack[i+len])%mod;
            hs= ((hs)%mod + mod)%mod;
        }
        return -1;
    }
};