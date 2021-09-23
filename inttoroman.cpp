class Solution {
public:
    string intToRoman(int num) {
        
      vector<string> r= {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        vector<int> v= {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string s;
        int i=0;
        while(num)
        {
            while(num>=v[i])
            {
                num-=v[i];
               s.append(r[i]); 
            }
            i++;
        }
        return s;
        
    }
};