// Source : https://leetcode.com/problems/longest-common-prefix/
// Author : Brian SU
// Date   : 2022-10-19

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        char c;
        if(strs.size() < 1){
            return ans;
        }
        else if(strs.size() == 1){
            return strs[0];
        }
        for(int i=0;i<strs[0].size();i++){
            c=strs[0][i];
            for(auto s : strs){
                if(i+1 > s.size() || c!=s[i]){
                    return ans;
                }
            }
            ans.push_back(c);
        }
        return ans;
    }
};
