class Solution {
public:
    int romanToInt(string s) {
      unordered_map<char, int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int ans=0;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(i<s.size()-1 && ((s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')) || (s[i]=='X' &&(s[i+1]=='L' || s[i+1]=='C')) || (s[i]=='C' &&(s[i+1]=='D' || s[i+1]=='M'))))
                ans-=mp[s[i]];
            else ans+=mp[s[i]];
        }
        return ans;
    }
};