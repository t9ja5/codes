///author = t9ja5
#include<bits/stdc++.h>
class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> nneg_nums;
        vector<int> indexes;
    
            for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]>=0){
            
              nneg_nums.push_back(nums[i]);
                indexes.push_back(i);

            }
        }
        int m=nneg_nums.size();
        if(m==0) return nums;
        k = k%m;
         rotate(nneg_nums.begin(),nneg_nums.begin()+k,nneg_nums.end());
         for(int i=0 ; i<m ; i++){
            nums[indexes[i]]=nneg_nums[i];
         }
    return nums;
    }
};