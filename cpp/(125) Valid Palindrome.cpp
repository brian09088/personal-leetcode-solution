class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;
        while(start <= end){
            // isalnum 函數檢查是否為英文字母或數字
            if(!isalnum(s[start])){
                start++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            // tolower 英文字母大寫轉小寫
            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
    }
};
