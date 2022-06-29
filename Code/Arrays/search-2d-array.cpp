/*
1st approach:- 
Linaer search TC=O(N*M)

2nd approach:- 
Go to each row and do binary search on each row.
TC=O(N*logM)

3rd approach(Optimal):-
GFG Question:-
1. Put the pointer to last element of 1st row and check target > or < pointer 
2. If target is grater move pointer down else move pointer towards the left 
since the row and columns is sorted 
Note: In this process if pointer moves out of bound then it means the target is not present in the matrix 

Leet Code Question:- 
Image a 1D array and put imaginary indexes and do binary search on them.
To calculate the values at the imaginary index i=index/M, j=index%M 
This is how you will get (i,j)
TC=O(logM*N)

*/


   bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         if(matrix[i][j]==target){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        
        int n=matrix.size();        
        int m=matrix[0].size();
        int size=n*m-1;
        int lo=0;
        int hi=n*m-1;
        while(lo<=hi){
            int mid = (lo+(hi-lo)/2);
            int i=mid/m;
            int j=mid%m;
            if(matrix[i][j]==target){
                return true;
            }
            if(matrix[i][j]<target){
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
            return false;
    }