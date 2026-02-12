class Solution {
public:
    bool isPalindrome(int x) {
        int tempx=x;
        if(x<0) return false;
        long long int rev=0,lastdigit=0;
        while(tempx!=0){
            lastdigit = tempx%10;
            rev=rev*10+lastdigit;
            tempx=tempx/10;
             }
             if(rev==x) return true;
            else return false;
    }
};