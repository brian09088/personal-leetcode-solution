class Solution {
public:
    int uniquePaths(int m, int n) {
        /* long mn[m+n];
        mn[0] = 1;
        for(int i=1;i<=m+n-1;i++) {
            mn[i] = i*mn[i-1];}
        return (int)(mn[m+n-2]/(mn[m-1]*mn[n-1])); 
        計算階乘會overflow*/
        //改用dp解法
        int dp[m][n];
        for(int i=0;i<m;i++){dp[i][0] = 1;}
        for(int i=0;i<n;i++){dp[0][i] = 1;}
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};
