// Source : https://leetcode.com/problems/longest-palindromic-substring/
// Author : Brian SU
// Date   : 2022-10-18

class Solution {
public:
    string longestPalindrome(string s) {
        
        if(s.size() == 0) return "";
        int len=s.size();
        int dp[len][len];
        int i,j;
        int start=0;
        int mx=1;
        memset(dp,0,sizeof(dp));
        for(i=0;i<len;i++){
            dp[i][i]=1;}
        
        for(i=0;i<len;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                mx=2;
                start=i;}
        }
        
        for(int k=3;k<=len;k++){
            for(i=0;i<len-k+1;i++){
                j=i+k-1;
                if(s[i]==s[j] && dp[i+1][j-1]==1){
                    dp[i][j]=1;
                    if(k>mx){
                        mx=k;
                        start=i;}
                }
            }
        }
        return s.substr(start,mx);
    }
};
