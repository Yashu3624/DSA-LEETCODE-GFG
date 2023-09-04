class Solution {
public:
    int divide(int dividend, int divisor) {
        int res ;
        if(dividend>=INT_MAX && divisor ==1) return INT_MAX;
        else if(dividend<=INT_MIN && divisor == 1) return INT_MIN;
        else if(dividend<=INT_MIN && divisor==-1) return abs(INT_MAX);
        else
        return  dividend/divisor;
    }
};