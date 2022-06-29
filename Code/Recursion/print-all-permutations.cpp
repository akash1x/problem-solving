/*
n=3 will give 3! = 6 permutations

TC= O(n!*n)
SC= O(n)
Ques: https://leetcode.com/problems/permutations/

*/


class Solution {
public:
    void solve(vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans,int freq[]){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(freq[i]==0){
                ds.push_back(nums[i]);
                freq[i]=1;
                solve(nums,ds,ans,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
        
    }
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> ds;
            int freq[nums.size()];
            for(int i=0;i<nums.size();i++) freq[i] =0;
            
            solve(nums,ds,ans,freq);
            return ans;
    }
};