class Solution {
public:
    int minDistance(string word1, string word2) {
        int m= word1.size();
        int n= word2.size();
        if(m<n)
            return minDistance(word2, word1);
        
        vector<int> pre(n+1), cur(n+1);
        for(int i=0; i<n+1; i++)
        {
            pre[i]=i;
        }
        
        for(int i=1; i<=m; i++)
        {
            cur[0]=i;
            for(int j=1; j<=n; j++)
            {
                if(word1[i-1]==word2[j-1])
                    cur[j]=pre[j-1];
                else cur[j]= min(pre[j], min(cur[j-1], pre[j-1]))+1;
                
            }
            pre=cur;
        }
        return cur[n];
    }
};