int uniqueSubstrings(string s)
{
    //Write your code here
    int len=0;
    vector<int> ch(26, 0);
    int l=0, r=0; 
    for(int i=0; i<s.length(); i++)
    {
        if(ch[s[i]-'a'])
        {
            while(l<=i && ch[s[i]-'a'])
            {
                ch[s[l]-'a']--;
                l++;
            }
            
        }
        ch[s[i]-'a']++;
        len= max(i-l+1, len);
    }
    return len;
}