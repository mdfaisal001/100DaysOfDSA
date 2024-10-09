#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
   int n = nums.size();
   int low = 0;
   int high = n-1;
   if(n < 2){
       return nums;
   }
   while(low <= high){
       if(nums[low]<0){
           low++;
       }
       else if(nums[high]>=0){
           high--;
       }
       else{
           swap(nums[low],nums[high]);
           low++;
           high--;
       }
 }
   return nums;
}

