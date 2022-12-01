class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            set <char> row,column;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.' && !row.insert(board[i][j]).second){
                    return false;
                }
                if(board[j][i]!='.' && !column.insert(board[j][i]).second){
                    return false;
                }
            }
        }

        for(int p=0;p<3;p++){
            for(int q=0;q<3;q++){
                set <char> block;
                for(int a=0;a<3;a++){
                    for(int b=0;b<3;b++){
                        int x=p*3+a;
                        int y=q*3+b;
                        if(board[x][y]!='.' && !block.insert(board[x][y]).second){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
