class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long int res=0;
        int og=x;
        while(x!=0){
            int ld= x%10;
            x=x/10;
            res=res*10+ld;
        }
        if(res==og){
            return true;


        }
    return false;
    }
};