/*
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

It is guaranteed that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

Link: https://leetcode.com/problems/combination-sum/

TC=O(2^t *k)
*/


  void solve(int index,vector<int> &ds ,vector<int> &candidates, int sum,vector<vector<int>> &ans ){
        if(index==candidates.size()){
          if(sum==0){
              ans.push_back(ds);
          }
            return;
        }
        
        if(candidates[index]<=sum){
        //Pick the element
        ds.push_back(candidates[index]);
        sum= sum-candidates[index];
        solve(index,ds,candidates,sum,ans);
        //Reverse the state of recursion
        sum= sum+candidates[index];
        ds.pop_back();  
      
        }
        //Don't pick the element
        solve(index+1,ds,candidates,sum,ans);        
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0,ds,candidates,target,ans);
        return ans;
        
    }

