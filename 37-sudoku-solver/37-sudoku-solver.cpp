class Solution {
public:
    
    bool isValid(vector<vector<char>>& board, int row, int col, char ch){
        for(int i=0;i<9;i++){
            if(board[row][i]==ch){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(board[i][col]==ch){
                return false;
            }
        }
        int k=(row/3)*3;
        int l=(col/3)*3;
        for(int i=k;i<k+3;i++){
            for(int j=l;j<l+3;j++){
                if(board[i][j]==ch){
                    return false;
                }
            }
        }
        return true;
    }
    
    bool solve(vector<vector<char>>& board){
        int i,j,k;
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(k=1;k<=9;k++){
                        if(isValid(board,i,j,k+'0')){
                            board[i][j]='0'+k;
                            if(solve(board))
                                return true;
                            else
                                board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};