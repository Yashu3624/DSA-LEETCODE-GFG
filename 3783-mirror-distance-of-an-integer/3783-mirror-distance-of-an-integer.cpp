class Solution {
public:
    int reverseNum(int n ){
        int num = 0 ; 
        while(n>0){
            int rem = n%10 ; 
            n = n/10 ; 
            num =num*10+ rem ; 
        }
      
        return num ; 
    }
    int mirrorDistance(int n) {
        int revNum = reverseNum(n) ; 
        return abs(n-revNum) ; 
    }
};