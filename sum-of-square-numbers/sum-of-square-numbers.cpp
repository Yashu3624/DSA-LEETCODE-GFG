class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int i = 0 ;
        long long int j = sqrt(c);
        while(i<=j){
            if(i*i+j*j==c){
                return true;
            }
            else if(i*i+j*j>c){
                j -= 1;
            }
            else{
                i += 1;
            }
        }
        return false;
    }
};