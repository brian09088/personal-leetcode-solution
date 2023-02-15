class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector <vector<int>> ans(n , vector<int>(n,0));
        int row = 0, column = 0;
        int num = 0;
        int count = n+1;
        while((count-=2) > 0){
            //top
            for(int i=0; i<count; i++){
                ans[row][column++] = ++num;}
            //right
            for(int i=0; i<count; i++){
                ans[row++][column] = ++num;}
            //down
            for(int i=0; i<count; i++){
                ans[row][column--] = ++num;}
            //left
            for(int i=0; i<count; i++){
                ans[row--][column] = ++num;}
            row++;
            column++;
        }
        if(n % 2 == 1){
            ans[n/2][n/2] = ++num;
        }
        return ans;
    }
};
