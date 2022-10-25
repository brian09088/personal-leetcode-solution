class Solution {
public:
    string intToRoman(int num) {
        vector<string> sym({"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"});
        vector<int> number({1000,900,500,400,100,90,50,40,10,9,5,4,1});
        string a;
        
        for(int i=0;i<number.size();i++){
            if (num >= number[i]){
                for(int j=0;j<(num/number[i]);j++){
                    a=a+sym[i];}
                num = num % number[i];}
        }
        return a;
    }
}; 