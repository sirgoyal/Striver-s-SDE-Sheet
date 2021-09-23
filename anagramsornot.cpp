class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        if(a.size()!=b.size())
    return 0;
    
    unordered_map<char, int> mp1, mp2;
    for(int i=0; i<a.size(); i++)
    {
        mp1[a[i]]++;
        mp2[b[i]]++;
    }
    
    for(int i=0; i<a.size(); i++)
    {
        if(mp1[a[i]]==mp2[a[i]] && mp1[b[i]]==mp2[b[i]])
        continue;
        else return false;
    }
    return true;
        
    }