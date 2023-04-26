class Solution {
public:
    bool isNumber(string s) {
        bool num = false, numafterE = true, dot = false, exp = false, sign = false;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(i<n-1 && s[i+1]!=' ' && (num||dot||exp||sign)){
                    return false;}   
            }
            else if(s[i]=='+' || s[i]=='-'){
                if(i>0 && s[i-1] != 'e' && s[i-1] != ' '){
                    return false;
                    sign = true;
                }
            }
            else if(s[i]>='0' && s[i]<='9'){
                num = true;
                numafterE = true;
            }
            else if(s[i]=='.'){
                if(dot || exp){return false;}
                dot = true;
            }
            else if(s[i]=='e' || s[i]=='E'){
                if(exp || !num){return false;}
                exp = true;
                numafterE = false;
            }
            else{
                return false;
            }
        }
        return num && numafterE;
    }
};
