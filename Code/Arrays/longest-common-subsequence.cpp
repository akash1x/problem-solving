/*
1st Approach(Brute Force):- 
--> Sort the array.
--> Using counters and if else conditions find longest count 

2nd approach(using unordered set for hash map ):-
--> Always find try to find min of the consecutive series 
 if(!hset.count(nums[i]-1))

--> From that min try to count the length of the sequence 
 while(hset.count(currNum+1)){
                    currNum+=1;
                    count++;
                }

--> Maintain max length and update by comparing the old length and new length
TC= O(3N)
SC= O(N)

[2,3,4,5,6,10,11,12]                
*/





class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>  hset;
        if(nums.size()==0) return 0;
        
        for(int i=0;i<nums.size();i++){
            hset.insert(nums[i]);
        }

        int maximun=0;
        for(int i=0;i<nums.size();i++){
     
            if(!hset.count(nums[i]-1)){
                int currNum=nums[i];
                int count=1;
                while(hset.count(currNum+1)){
                    currNum+=1;
                    count++;
                }
                maximun=max(maximun,count);
            }
        }
        return maximun;
    }
};