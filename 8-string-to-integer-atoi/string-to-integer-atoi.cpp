class Solution {
public:
//author: t9ja5
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long num = 0;

        // 1. Skip spaces
        while (i < s.size() && s[i] == ' ')
            i++;

        // 2. Check sign
        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
       if (s[i] == '-') sign = -1;
            i++;
        }

        // 3. Read digits
        while (i < s.size() && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');

        // 4. Clamp if overflow
            if (sign == 1 && num > INT_MAX)
                return INT_MAX;
            if (sign == -1 && -num < INT_MIN)
                return INT_MIN;

            i++;
        }

        return sign * num;
    }
};
