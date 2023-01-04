//do not use power function : pow(a,b) or a**b !!!
// c++: pow(a,b)=pow(a,b)=a^b
// python: pow(a,b)=a**b

class Solution {
public:
    double myPow(double x, int n) {
        double pow = 1;
        for(int i = n; i != 0; i/=2){
            if(i % 2 != 0){
                pow = pow*x;
            }
            x = x*x;
        }
        return n < 0 ? 1/pow : pow;
    }
};
