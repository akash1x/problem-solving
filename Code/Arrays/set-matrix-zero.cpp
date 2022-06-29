/*
Ques: Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

Approach:
	--> Iterate and note the position where element=0 and save it to vector<vector<int>>; like pair (i,j)
	--> Now from the positions vector we can run loop for (i,j) element 
		--> i,0 to i,nC and make all element in that position =0;
		--> 0,j to nR,j and make all element in that position =0;

	TC= O(N X M): For noting the position
		+ O(N X M): Iterating over the position vector
		* O(N+M) : Iterating entire row and column
	TC= O(N X M ) * O(N+M) 
	SC= O(N X M)	
		
*/

void setZeroes(vector<vector<int>>& matrix) {

        int nC=matrix[0].size();
        int nR=matrix.size();
        
        vector<vector<int>> pos;
        vector<int> index;
        for(int i=0;i<nR;i++){
            for(int j=0;j<nC;j++){
                if(matrix[i][j]==0){
                    index.clear();
                    index.push_back(i);
                    index.push_back(j);
                    pos.push_back(index);
                }
            }
        }
        
        for(int i=0;i<pos.size();i++){
            for(int j=0;j<nR;j++){
                matrix[j][pos[i][1]]=0;
            }
            for(int k=0;k<nC;k++){
                matrix[pos[i][0]][k]=0;

            }
            
        }
    }