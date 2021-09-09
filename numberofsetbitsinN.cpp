class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int c=0;
        while(N)
        {
            N&=N-1;
            c++;
        }
        return c;
    }
};