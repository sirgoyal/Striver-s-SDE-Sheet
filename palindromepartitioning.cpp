class Solution {
public:
    bool ispalin(string s){
        int i=0, j= s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
             return false;
            i++;
            j--;
        }
    return true;
    }
    void solve(int ind, string s, vector<vector<string>> &ans, vector<string> &ds){
        if(ind==s.size())
        {
            ans.push_back(ds);
        }
        string p;
        for(int i=ind; i<s.size(); i++)
        {
            p= s.substr(ind, i-ind+1);
            if(ispalin(p))
            {
                ds.push_back(p);
                solve(i+1, s, ans, ds);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
     vector<vector<string>> ans;
        vector<string> ds;
        solve(0, s, ans, ds);
        return ans;
    }
};