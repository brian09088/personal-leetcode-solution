class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int a = haystack.size();
        int b = needle.size();
        
        for(int i=0;i<=a-b;i++){
            int j=0;
            for(;j<b;j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
            }
            if(j==b){
                return i;
            }
        }
        return -1;
    }
};