/*
1st Approch (Brute Force):-
TC=O(N^2)
SC=O(1)


1st Approch (Using Hash Map):-
TC=O(N^2)
SC=O(1)

2nd Approach(Moore Voting element algo):-
1. Two var count and curr element 
2. if count ==0 then curr=nums[i];
3. if curr ==nums[i] c++ else c--;
In then end in curr we will have the majority element;

Intuition:- 
When ever the curr and nums[i] is not equal we decrease the count meaning 
it cancels the majority party 
so at the end majority = minority therefore if at the end we will have any element in the curr 
it will be the most voted.

**Works only if it is mentioned majority element exists
[2,3,4,5,6,6,10,11,12]  

*/

int majorityElement(vector<int>& nums) {
   
    //Moore voting elemenet Algo
    int c=0;
    int curr=0;    
    for(int i=0;i<nums.size();i++){
        if(c==0){
            curr=nums[i];
        }
        if(curr==nums[i]){
            c++;
        }else{
            c--;
        }
    }
    return curr; 
}