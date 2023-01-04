//do not use power function : pow(a,b) or a**b !!!
// c++: pow(a,b)=pow(a,b)=a^b
// python: pow(a,b)=a**b

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){return 1;}
        double pow = myPow(x,n/2);
        if(n % 2 == 0){return pow*pow;}
        if(n > 0){return pow*pow*x;}
        return pow*pow/x;
    }
};
