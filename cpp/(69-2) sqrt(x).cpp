//using linear search

class Solution {
public:
    int mySqrt(int x) {
        if(x==0){return 0;}
        int i=1;
        for(;i<=x/i;i++){
            if(i == x / i){
                return i;
            }
        }
        return i-1;
    }
};
