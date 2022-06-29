/*
Kadane Algorithm:- 
Ques: 
Given an integer array nums, find the contiguous subarray (containing at least one number) 
which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

link: https://leetcode.com/problems/maximum-subarray/

1. Keep summing the values if sum<0 we will discard the entire sum as, it 
   cannot be part of the subarray as it will decrease the values because it is -ve.
   TC= O(n)   
*/ 



 int maxSubArray(vector<int>& nums) {
        
        int max=-INT_MAX;
        int sum=0;
    
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>max) max = sum;
            
            if(sum<0){
                sum=0;
            }
        }
        return max;
    }