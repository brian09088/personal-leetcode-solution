class Solution {
public:
  int totalNQueens(int n) {
    vector<int> cols(n);
    vector<int> diag1(2 * n - 1);
    vector<int> diag2(2 * n - 1);
    int ans = 0;
    
    function<void(int)> dfs = [&](int r) {
      if (r == n) {
        ++ans;
        return;
      }
 
      for (int i = 0; i < n; i++) {
        int& c = cols[i];
        int& d1 = diag1[r + i];
        int& d2 = diag2[r - i + n - 1];
        if (c || d1 || d2) continue;
        c = d1 = d2 = 1;
        dfs(r + 1);
        c = d1 = d2 = 0;
      }
    };
    
    dfs(0);
    return ans;
  }
};
