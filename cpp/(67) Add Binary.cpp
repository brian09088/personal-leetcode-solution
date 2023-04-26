class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.size()-1;
        int n = b.size()-1;
        int carry = 0;
        string res = "";
        while(m >= 0 || n >= 0){
            int num1 = m >= 0 ? a[m--]-'0' : 0;
            int num2 = n >= 0 ? b[n--]-'0' : 0;
            int sum = num1 + num2 + carry;
            res = to_string(sum % 2) + res;
            carry = sum / 2;
        }
        return carry == 1 ? "1"+res : res;
    }
};
