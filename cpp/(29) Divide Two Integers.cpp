class Solution {
public:
    int divide(int dividend, int divisor) {
        
        bool res = (dividend<0 == divisor<0);
        
        if(dividend == divisor){
            return 1;
        }
        unsigned int ans = 0;
        
        unsigned int a = abs(dividend);
        unsigned int b = abs(divisor);
        while(a >= b){
            short q=0;
            while(a > (b<<(q+1))){
                q++;
                }
            ans += (1<<q);
            a = a - (b<<q);
        }
        if(ans == (1<<31) and res){
            return INT_MAX;
        }
        return res ? ans : -ans;
    }
};
