/*
Ques: https://leetcode.com/problems/rotate-image/
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
DO NOT allocate another 2D matrix and do the rotation.

1 2 3     7 4 1
4 5 6 --> 8 5 2
7 8 9     9 6 3

1st approach: 
Create a matrix and copy row of 1st matrix to column of newly created matrix.
TC=O(N^2)
SC=O(N^2)

2nd approach:- 
1. Transpose the matrix
2. reverse each row of the matrix 
TC=O(2*N^2)=O(N^2)
*/    



    void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();
    //Transpose    
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //Reverse each row of transposed matrix
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    
      
    }