class Solution {
public:
    int sumBase(int n, int k) {
        int res = 0 , sum = 0 ;
        while(n!=0){
            int rem = n%k ;
            n = n / k ;
            res = rem +res*10;
            sum += rem;
        }
       
        
        return sum;
    }
};