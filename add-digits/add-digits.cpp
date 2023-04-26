class Solution {
public:
    int addDigits(int num) {
        int ans = 0 ;
        if(num<=9)
        return num ;
        while(num!=0){
            ans += num%10 ;
            num /= 10 ;
            if(ans>9 && num==0){
                num = ans ;
                ans = 0;
            }
        }
        return ans;
        
    }
};