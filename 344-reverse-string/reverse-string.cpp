class Solution {
//author:t9ja5
public:
//algorithm : two pointer
    void reverseString(vector<char>& s) {
        int c1 = 0;
        int c2 = s.size() - 1;

        while (c1 < c2) {
            char temp = s[c1];
            s[c1] = s[c2];
            s[c2] = temp;
            c1++;
            c2--;
        }
    }
};
