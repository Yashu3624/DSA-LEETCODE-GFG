class Solution {
public:
    int rotatedDigits(int n) {
        vector<int>dp(n+1,0) ; 
        int cnt = 0 ; 
        for(int i = 0 ; i <= n ; i++){
            if(i<10){
                if(i==0 || i==1 || i==8 ) dp[i]=1 ; 
                else if(i==2 || i==5 || i==6 || i==9){
                    dp[i] = 2 ; 
                    cnt++ ;
                }
                else{
                    dp[i] = 0 ;
                }
            }
            else{
                int num = dp[i/10] ; 
                int rem = dp[i%10] ; 
                if(num==1 && rem==1) dp[i] = 1 ; 
                else if(num>=1 && rem>=1){
                    dp[i] = 2 ; 
                    cnt++ ; 
                }
                else
                dp[i] = 0 ; 

            }
        }
        return cnt ; 
    }
};