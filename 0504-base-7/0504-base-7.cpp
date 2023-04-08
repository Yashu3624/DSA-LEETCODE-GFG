class Solution {
public:
    string convertToBase7(int num) {
        int base = 1 , rem , res = 0 ;
        while(num!=0){
            int rem= num%7;
            res += rem*base;
            base *= 10 ;
            num /= 7;
        }
        return to_string(res);
    }
};