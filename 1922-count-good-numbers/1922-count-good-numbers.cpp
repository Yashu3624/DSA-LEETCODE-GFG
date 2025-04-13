class Solution {
public:
    long long power(long long base , long long exp , long long mod){
        long long result =1 ; 
        base %= mod ; 
        while(exp){
            if(exp%2==1){
                result = (result * base) % mod; ;
            }
            base = (base * base) % mod;
            exp /= 2 ;
        }
        return result ; 
    }
    int countGoodNumbers(long long n) {
        long long mod = 1e9 + 7;
        long long even = (n + 1) / 2;
        long long odd = n / 2;
        long long res = (power(5, even, mod) * power(4, odd, mod)) % mod;
        return (int)res;
        
    }
};