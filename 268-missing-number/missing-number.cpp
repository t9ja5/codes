#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
 int n= nums.size();
 int sum = (n*(n+1)/2);
for(int x : nums)        
        {
            sum = sum-x;
        }
      return sum;
  }
};