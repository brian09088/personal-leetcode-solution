// Source : https://leetcode.com/problems/zigzag-conversion/
// Author : Brian SU
// Date   : 2022-10-18

class Solution {
public:
    string convert(string s, int r) {
        int len=s.size();
        vector<char> ans;
        int times=2*r-2;
        if(r==1){
            return s;
        }
        
        for(int i=0;i<r;i++){
            for(int j=i;j<len;j=j+times){
                ans.push_back(s[j]);
                if(i>0 && i<r-1 && j+times-2*i<len){
                    ans.push_back(s[j+times-2*i]);}             
            }
        }
        string answer(ans.begin(),ans.end());
        return answer;
    }
};
