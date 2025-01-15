class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int res = 0 , cntBits = __builtin_popcount(num2) ;
        for(int i = 31 ; i >= 0 && cntBits > 0 ; i--){
            if(num1 &(1<<i)){
                res |= (1<<i) ; 
                cntBits-- ;
            }
        }
        for(int i = 0 ; i < 32 && cntBits>0 ; i++){
            if(!(res &(1<<i))){
                res |= (1<<i) ; 
                cntBits-- ;
            }
        }
        return res ;
    }
};