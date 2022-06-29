/*
Ques: Link: https://leetcode.com/problems/pascals-triangle/


1. Note to work we need to define the graphs size while declaring
2. 1st and last element will be always be 1 
3. From 3rd row onwards: j loop will work 
   taking previous row values for eg calculating for 2nd element 
   2nd element = prev 2nd element (j)+ prev 1st element (j-1) 

   Now variations:- 
1. if asked the value of pascal triangle for 5th row and 3rd column 
   formula is (R-1 C C-1) ie 5-1 C 3-1 = 4C2
   TC = O(n) for the combination formula

2. Print nth row of pascal triangle
   --> calculate nCr for all the element of that row in this case TC= O(n^2)
   --> To optimise use same formula but in smarter way:- 
   4C0= 1
   4C1= 4/1
   4C2= 4*3/2*1 (Note: No of terms in numerator = no. of terms in denominator)
   4C3= 4*3*2/3*2*1
   Observer the pattern 

   for(int i=0;i<k;i++){
    res *=(n-1);
    res /=(i+1);
   } 

        1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1   

     TC= O(1)
*/    



    vector<vector<int>> generate(int numRows) {
       
        vector<vector<int>> res(numRows);

        for(int i=0;i<numRows;i++){
            res[i].resize(i+1);
            res[i][0]=res[i][i]=1;
            
            for(int j=1;j<i;j++){
                res[i][j]=res[i-1][j]+res[i-1][j-1];
            }
        }
        
        return res;
    }