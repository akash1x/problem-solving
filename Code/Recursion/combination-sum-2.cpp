/*
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

Link: https://leetcode.com/problems/combination-sum-ii/

TC= O(2^n *k)
SC=O(k*x)
*/



class Solution {
public:
    
 void solve(int index,vector<int> &ds ,vector<int> &candidates, int sum,vector<vector<int>> &ans ){
     if(sum==0){
         ans.push_back(ds);
         return;
     }
     
     for(int i=index;i<candidates.size();i++){
         if(i>index && candidates[i-1]==candidates[i]) continue;
         if(candidates[i]>sum) break;
         //Pick a element
         ds.push_back(candidates[i]);
         sum=sum-candidates[i];
         solve(i+1,ds,candidates,sum,ans);
         //Reverse the recurssion state for next possibility in this loop
         sum=sum+candidates[i];    
         ds.pop_back();    
         
         
     }

     
 }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        solve(0,ds,candidates,target,ans);
        return ans;
    }
};