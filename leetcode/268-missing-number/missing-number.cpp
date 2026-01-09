#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
 int n= nums.size();  // n stores largest element/last element of vector array nums
 int sum = (n*(n+1)/2);   // sum of n numbers from arithmetic progression 
for(int x : nums)        
        {
            sum = sum-x;     // we are deleting actual numbers of nums vector array from expected sum so at last we get missing number
        }
      return sum;
  }
};
