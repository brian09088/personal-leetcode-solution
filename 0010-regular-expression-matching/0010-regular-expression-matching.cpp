class Solution {
public:
    bool isMatch(string s, string p) {
        int m=s.size();
        int n=p.size();
        bool dp[m+1][n+1];
        memset(dp,false,sizeof(dp[m+1][n+1])*(m+1)*(n+1));
        dp[0][0]=true;
        
        for(int i=2;i<n+1 && p[i-1]=='*';i=i+2){
            dp[0][i]=true;
        }
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                int indexs=i-1;
                int indexp=j-1;
                if(p[indexp]==s[indexs] || p[indexp]=='.'){
                    dp[i][j]=dp[i-1][j-1];}
                else if(p[indexp]=='*'){
                    dp[i][j]=dp[i][j-2] || ((s[indexs]==p[indexp-1] || 
                    p[indexp-1]=='.') && dp[i-1][j]);}
            }
        }
        return dp[m][n];
    }
};