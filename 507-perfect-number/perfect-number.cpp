class Solution {
public:
    bool checkPerfectNumber(int num) {
        int per_sum=0;
        for(int i=1 ; i<num ;i++){
            if(num%i==0){
                if(i==num){
                    break;
                }else{
                 per_sum=per_sum+i;}
                   }}
        if(per_sum==num) return true;
        else return false;
    }
};