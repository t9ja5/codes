class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int,string>> valSym{
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
            {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
            {5, "V"},    {4, "IV"},   {1, "I"}
        };

        string ans;
        for( auto [val,sym] : valSym){
            if(num==0) break;
        
        while(num>=val){
            ans = ans + sym;
            num = num - val;  // mhanje letssay 3900 so 3900 - 3000 = 900 and so on for whole integer
        }
        }
    return ans;
    }


};