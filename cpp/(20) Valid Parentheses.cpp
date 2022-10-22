// Source : https://leetcode.com/problems/valid-parentheses/
// Author : Brian SU
// Date   : 2022-10-22

class Solution {
public:
    bool isValid(string s) {
        stack <char> a;
        for(auto i : s){          
            if(i=='(' || i=='[' || i=='{'){
                a.push(i);}
            else{
                if(a.empty() || a.top()!='(' && i==')' 
                   ||  a.top()!='[' && i==']'
                   ||  a.top()!='{' && i=='}'){  
                        return false;}
                else{
                    a.pop();
                }
            } 
        }
        return a.empty();
    }
};
