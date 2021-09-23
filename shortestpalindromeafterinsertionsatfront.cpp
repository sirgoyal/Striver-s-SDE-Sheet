class Solution {
public:
    string shortestPalindrome(string s) {
        string rev=s;
        reverse(rev.begin(), rev.end());
        string str= s+'$'+rev;
        int n= str.size();
        vector<int> lps(n);
        int i=1;
        lps[0]=0;
        int len=0;
        while(i<n)
        {
            if(str[i]==str[len])
            {
                len++;
            lps[i]= len;
                i++;
             }
            else {
                if(len!=0)
                {
                    len= lps[len-1];
                }
                else{
                    lps[i]=0;
                    i++;
                }
            }
               
        }
      i= s.size()-1;
        string ans;
        while(i>=lps.back())
        {
            ans+=s[i];
i--;
        }
        ans.append(s);
        
        return ans;
    }
};