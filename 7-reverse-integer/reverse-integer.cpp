class Solution {
public:

    int reverse(int x) {
    int lastdigit=0;
    int rev = 0;
        while(x!=0){
              lastdigit = x%10;
           if (rev > 214748364 || (rev == 214748364 && lastdigit > 7)) {
                return 0;
            }
            if (rev < -214748364 || (rev == -214748364 && lastdigit == -9)) {
                return 0;
            }
          
            rev = rev*10+lastdigit;
            x=x/10;
        }
return rev;

    }
};