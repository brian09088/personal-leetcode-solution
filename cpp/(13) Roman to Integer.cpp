// Source : https://leetcode.com/problems/roman-to-integer/
// Author : Brian SU
// Date   : 2022-10-18

class Solution {
public:
    int romanToInt(string s) {
        map<char,int> sym {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}}; 
        int a=0;
        
        for(int i=0;i<s.size();i++){
            if (sym[s[i]] >= sym[s[i+1]]){
                a=a+sym[s[i]];}
            else{
                a=a-sym[s[i]];}
        }
        return a;
        
    }
};
