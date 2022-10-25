class Solution {
public:
    int myAtoi(string s) {
        int len=s.size();
        int i=0;
        int sign=1;
        long long ans=0;
        while (i<len && s[i]==' '){
            i++;
        }
        if(s[i]=='-' || s[i]=='+'){
            if(s[i]=='-'){
                sign=-1;
            }
            i++;
        }
            
        for(int j=i;j<len;j++){
            if(!isdigit(s[j])){
                break;}
            else if(s[j]>='0' && s[j]<='9'){
                int num=s[j]-'0';
                if((ans>INT_MAX) || ((ans*10)+num>INT_MAX)){
                    return sign==1 ? INT_MAX : INT_MIN;}
                
                ans=ans*10+num;}
        }
        return ans*sign;
    }
};