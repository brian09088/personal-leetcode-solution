class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(board.size()==0){return false;}
        m = board.size();
        n = board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(search(board,word,0,i,j)){
                    return true;
                }
            }
        }
        return false;
    }
    bool search(vector<vector<char>>& board, const string word, int d, int x, int y){
        if(x < 0 || x == m || y < 0 || y == n || word[d] != board[x][y]){
            return false;
        }
        if(d == word.length()-1){
            return true;
        }
        char c = board[x][y];
        //为了避免同一个字符在同一个单词中被重复使用，需要将已经搜索到的字符标记为0，以后就不再搜索这个字符了。如果没有将已经搜索到的字符标记为0，那么搜索算法可能会无限制地在同一个字符上来回搜索，最终导致死循环。例如，在搜索单词"ABCB"的过程中，如果没有将已经搜索过的"B"标记为0，那么算法会不断地从"B"出发，最终陷入死循环，无法找到正确的解
        board[x][y] = 0;
        bool found = search(board,word,d+1,x-1,y)
                    || search(board,word,d+1,x+1,y)
                    || search(board,word,d+1,x,y-1)
                    || search(board,word,d+1,x,y+1);
        board[x][y] = c;
        return found;
    }
    private:
    int m,n;
};
