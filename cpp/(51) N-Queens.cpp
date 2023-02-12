class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        sol.clear();
        board = vector<string>(n,string(n, '.'));
        col = vector<int> (n,0);
        diag1 = vector<int> (2*n-1,0);
        diag2 = vector<int> (2*n-1,0);
        nqueens(n,0);
        return sol;
    }
private:
    vector<string> board;
    vector<int> col;
    vector<int> diag1;
    vector<int> diag2;
    vector<vector<string>> sol;

    bool available(int x,int y, int n){
        return !col[x]
            && !diag1[x+y]
            && !diag2[x-y+n-1];
    }

    void update(int x,int y, int n ,bool is_put){
        col[x] = is_put;
        diag1[x+y] = is_put;
        diag2[x-y+n-1] = is_put;
        board[y][x] = is_put ? 'Q' : '.';
    }

    void nqueens (const int n, const int y){
        if(y==n){
            sol.push_back(board);
            return;
        }

        for(int x=0; x < n; x++){
            if(!available(x,y,n)) continue;
            update(x,y,n,true);
            nqueens(n,y+1);
            update(x,y,n,false);
        }
    }
};
