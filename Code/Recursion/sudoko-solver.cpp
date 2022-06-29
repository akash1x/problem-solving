
/*
Link: https://leetcode.com/problems/sudoku-solver/submissions/
*/



class Solution {
public:
    bool solve(vector<vector<char>>& board){
        int rowSize = board.size();
        int colSize = board[0].size();
        
        for(int i=0;i<rowSize;i++){
            for(int j=0;j<colSize;j++){
                
                if(board[i][j]=='.'){
                    for(char c='1'; c<='9';c++){
                        
                        if(isValid(board,i,j,c)){
                            board[i][j]=c;
                            if(solve(board)==true) return true;
                            else board[i][j]='.';
                        } 
                        
                    }
                    // if we were not able to place any number 
                    return false;
                }
            }
        }
        return true;
    }
    
    bool isValid(vector<vector<char>>& board ,int row, int col, char c){
        // In single loop we will check all three conditionsof sudoko rules
        for(int i=0;i<9;i++){
            if(board[i][col]==c) return false;
            if(board[row][i]==c) return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c) return false;
        }
        return true;
        
    }
    void solveSudoku(vector<vector<char>>& board) {
            solve(board);
    }
};