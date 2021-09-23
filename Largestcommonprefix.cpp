class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     string ans="";
     
         int p=0;
        char c;
        while(1){
        for(int i=0; i<strs.size(); i++)
        {
            if(i==0 && p<strs[0].size())
               c=strs[0][p]; 
            else if(p==strs[i].size() || strs[i][p]!=c)
                return ans;
        }
            p++;
            ans.push_back(c);
        }
        return ans;
    }
};