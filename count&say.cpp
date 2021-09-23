class Solution {
public:
    string countAndSay(int n) {
        string s= "1";
        if(n==1)
            return s;
        n-=1;
        while(n--)
        {
            string ans="";
            int i=0;
            while(i<s.size())
            {
                int l=i;
                while(i<s.size() && s[i]==s[l])
                {
                    i++;
                }
                ans+= ((i-l)+'0');
                ans+=s[l];
                
            }
            s=ans;
            
        }
        return s;
        
    }
};