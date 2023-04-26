class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.empty() || grid[0].empty()){return 0;}
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0){continue;}
                if(i==0){grid[0][j] += grid[0][j-1];}
                else if(j==0){grid[i][0] += grid[i-1][0];}
                else{grid[i][j] += min(grid[i][j-1],grid[i-1][j]);}
            }
        }
        return grid[m-1][n-1];
    }
};
