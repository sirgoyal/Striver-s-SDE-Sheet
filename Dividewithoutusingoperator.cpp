class Solution {
public:
    int divide(int A, int B) {
        if(A==0)
            return 0;
        long long q=0;
          int sign = ((A>0)^(B>0))?-1:1;
       if(B==-1)
       {
          q= A==INT_MIN?INT_MAX:abs(A);
           return sign*q;
       }
        else if(B==1)
        {
            return A;
        }
      
        long long a= 1LL*abs(A);
        long long b=1LL*abs(B);
        
        long long sum=0;
        for(int i=31; i>=0; i--)
        {
           if(sum+(1LL*b<<i)<=a)
           {
               sum+=(b<<i);
               q|=(1LL<<i);
               
           }
        }
        if(sign==-1)
            q*=-1;
        return q;
    }

};