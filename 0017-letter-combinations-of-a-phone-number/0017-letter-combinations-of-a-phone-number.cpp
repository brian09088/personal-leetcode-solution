class Solution {
    private:
    string tb[10]={
        " ", //0
        " ", //1
        "abc", //2
        "def", //3
        "ghi", //4
        "jkl", //5 
        "mno", //6
        "pqrs", //7
        "tuv", //8
        "wxyz" //9
    };
    vector<string> result;
    
    void trans(int idx, string& digits, string& r){
        if(idx==digits.size()){
            result.push_back(r);
            return;
        }
        else{
            int num = digits[idx]-'0';
            for(int i=0;i<tb[num].size();i++){
                r[idx] = tb[num][i];
                trans(idx+1,digits,r);
            }        
        }
    }
    
    public:
    vector<string> letterCombinations(string digits) {
        int len=digits.size();
        result.clear();
        if(len==0){
            return result;}
        string r(digits.size(),' ');
        trans(0,digits,r);
        return result;
    }
};