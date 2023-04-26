class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        /*int n = digits.size();
        int num = 0;
        for(int i=0;i<n;i++){
            num += digits[i] * 10^(n-1-i);
        }
        num += 1;
        vector<int> res;
        int dig;
        while(num > 0){
            dig = num % 10;
            num /= 10;
            res.push_back(dig);
        }
        return reverse(res.begin(),res.end());*/
        //if(digits.empty()){return digits;}
        int n = digits.size();
        int carry = 1;
        for(int i=n-1;i>=0;--i){
            if(carry == 0){return digits;}
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
        }
        if(carry == 1){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
