class Solution {
    //return value
    //0，找過找過s後，並沒有配對成功
    //1，還沒找完s，無法確定是否配對成功
    //2，配對成功
    int dfs(string& s, string& p, int si, int pi) {
        if (si == s.size() and pi == p.size()) return 2;
        if (si == s.size() and p[pi] != '*') return 0;
        if (pi == p.size()) return 1;
        if (p[pi] == '*') {
            //*跳過重複的，去看下一個
            if (pi+1 < p.size() and p[pi+1] == '*') 
                return dfs(s, p, si, pi+1);
            for(int i = 0; i <= s.size()-si; ++i) {
                int ret = dfs(s, p, si+i, pi+1);
                if (ret == 0 or ret == 2) return ret; 
            }
        }
        if (p[pi] == '?' or s[si] == p[pi])
            return dfs(s, p, si+1, pi+1);
        return 1;
    }    
    
public:
    bool isMatch(string s, string p) {
        return dfs(s, p, 0, 0) > 1;
    }
};
