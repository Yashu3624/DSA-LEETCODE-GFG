class Solution {
public:
    int countEven(int num) {
        int cnt =  0 ;
        for(int i = 2 ; i <=num ; i++){
            int k = i ;
            int sum = 0;
            while(k!=0){
             sum += k%10;
                k /= 10;
            }
            if(sum%2==0){
            cnt++;
        }
        }
        return cnt;
    }
};