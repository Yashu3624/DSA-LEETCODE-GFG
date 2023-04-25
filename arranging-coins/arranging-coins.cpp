class Solution {
public:
    int arrangeCoins(int n) {
        int i =    1 ;
        int row = 0 ;
        while(n>=i){
            n -= i ;
            i++;
            row++;
        
        }
        return row;
        
    }
};