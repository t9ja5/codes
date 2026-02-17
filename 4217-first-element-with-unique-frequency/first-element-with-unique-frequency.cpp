//author:t9ja5
class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> uniq;
        for(int i=0 ; i<n ; i++){   
                uniq[nums[i]]++;
        
        }
       unordered_map<int,int> uniqcount;
       for(auto x : uniq){
        uniqcount[x.second]++;
       }

for(auto x : nums){
    if(uniqcount[uniq[x]]==1) return x;

}
return -1;
        }
    
    
};