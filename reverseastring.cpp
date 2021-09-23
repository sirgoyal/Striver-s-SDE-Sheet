class Solution {
public:
    string reverseWords(string A) {
        int s=0;
        int e= A.size()-1;
        string str;
        while(A[s]==' ')
            s++;
        while(A[e]==' ')
            e--;
        while(e>=s)
        {
            int sz=0;
          while(e>=s && A[e]!=' ')
          {
              e--;
           sz++;
          }
            str.append(A.substr(e+1, sz));
            if(e>=s)
                str.push_back(' ');
            while( e>=s && A[e]==' ')
                e--;
            
        }
        return str;
    }
};