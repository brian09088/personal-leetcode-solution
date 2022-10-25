class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=s.size();
        int seq[128]={0};
        int mx=0;
        for(int i=0,j=0;j<len;j++){
            i=max(seq[s[j]],i);
            mx=max(mx,j-i+1);
            seq[s[j]]=j+1;
        }
        return mx;
    }
};