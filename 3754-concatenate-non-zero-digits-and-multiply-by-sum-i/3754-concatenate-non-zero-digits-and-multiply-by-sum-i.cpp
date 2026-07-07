class Solution {
public:
   
    long long sumAndMultiply(int n) {
        long long sum = 0 , ans = 0 , p= 1 ;
      
        while(n>0){
            int rem = n%10 ; 
             sum += rem ;
            if(rem!=0){
               
              ans += rem*p ;
              p *= 10 ; 
            }
            n = n /10;
        }
        return ans*sum ; 
    }
};