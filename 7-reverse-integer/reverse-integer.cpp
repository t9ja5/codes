class Solution {
public:
    int reverse(int x) {
        long long INT_MIN_VAL = -(1LL << 31);
        long long INT_MAX_VAL = (1LL << 31) - 1;

        
        //int counter=0;
        long long rev=0;
        int lastdigit;
        while(x!=0){
            lastdigit= x%10;
            rev = rev *10+(lastdigit);
            if(rev<INT_MIN_VAL||rev> INT_MAX_VAL) return 0;
            x=x/10;
        }
        return rev;
}
};