class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        rows = vector<vector<int>>(9, vector<int>(10));
        cols = vector<vector<int>>(9, vector<int>(10));
        boxes = vector<vector<int>>(9, vector<int>(10));

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                const char c = board[i][j];
                if(c != '.'){
                    int n = c-'0';
                    rows[i][n]=1;
                    cols[j][n]=1;
                    boxes[(i/3)*3+j/3][n]=1;
                }
            }
        }
        fill(board,0,0);
    }
private:
    vector<vector<int>> rows,cols,boxes;

    bool fill(vector<vector<char>>& board , int x, int y){
        if(y==9){return true;}
        int nx = (x+1) % 9;
        int ny = (nx==0) ? y+1 : y;
        if(board[y][x] != '.') return fill(board,nx,ny);

        for(int i=1;i<=9;i++){
            if(!rows[y][i] && !cols[x][i] && !boxes[(y/3)*3+x/3][i]){
                rows[y][i]=1;
                cols[x][i]=1;
                boxes[(y/3)*3+x/3][i]=1;
                board[y][x]=i+'0';
                if(fill(board,nx,ny)){return true;}
                board[y][x]='.';
                rows[y][i]=0;
                cols[x][i]=0;
                boxes[(y/3)*3+x/3][i]=0;
            }
        }
        return false;
    }
};
