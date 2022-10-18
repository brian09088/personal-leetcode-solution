// Source : https://leetcode.com/problems/palindrome-number/
// Author : Brian SU
// Date   : 2022-10-18

class Solution {
public:
    bool isPalindrome(int x) {
        long a=x;
        
        if(x<0 || (x!=0 && x%10==0) ){
            return false;}
        
        long num=0;
        
        while(x>0){
            num=num*10+x%10;
            x=x/10;}
        if(num==a){
            return true;}
        
     return false;
    }
};
