class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        n = pow(2,n)-1;
        for(int i=0;i<=n;i++){
            ans.push_back(i^(i>>1));
        }
        return ans;
    }
};
