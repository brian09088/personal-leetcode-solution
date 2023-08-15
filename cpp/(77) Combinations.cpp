class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        if(k < 0 || n < k){
            return {};
        }
        if(k == 0){
            return {{}};
        }
        vector<vector<int>> res = combine(n-1,k-1);
        for(auto &a : res){
            a.push_back(n);
        }
        for(auto &a : combine(n-1,k)){
            res.push_back(a);
        }
        return res;
    }
};
