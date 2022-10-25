class Solution {
public:
    vector <string> result;
    void DFS(string s , int left, int right, int n){
        if(left==n　&& right ==n){
            result.push_back(s);
        }
        if(left<n){
            DFS(s + '(', left+1, right, n);
        }
        if(right<left){
            DFS(s + ')',left, right+1, n);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        DFS("",0,0,n);
        return result;
    }
};