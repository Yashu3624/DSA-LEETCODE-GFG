class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res ;
        for(int i = left ; i <= right ; i++){
            int num = i ;
            int  ans = 0 ;
            while(num!=0){
                int rem = num%10;
                if(rem == 0 || i % rem != 0){
                    ans = 1 ;
                    break ; 
                }
                num = num / 10 ;
            }
            if(ans==0){
            res.push_back(i);
        }
        }
        return res;
    }
};