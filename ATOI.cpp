class Solution {
public:
    int myAtoi(string s) {
        int n=0;
        int i=0;
        bool neg=0;
        while(i<s.length() && s[i]==' '){
        i++;
        }
        if(i<s.length() && (s[i]=='-' || s[i]=='+')){
           if(s[i]=='-')
               neg=1;
            i++;
        }
       
        while(i<s.length() && (s[i]>='0' && s[i]<='9'))
        {
            
           if(n>INT_MAX/10 || (n==INT_MAX/10 && s[i]-'0'>7))
           { if(!neg)
               return INT_MAX;
            else return INT_MIN;
            }
            n=n*10+(s[i]-'0');
            i++;
        }
        if(neg)
            n*=-1;
        return n;
    }
};