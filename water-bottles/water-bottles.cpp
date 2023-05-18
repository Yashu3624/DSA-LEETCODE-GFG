class Solution {
public:
    int numWaterBottles(int n, int e) {
        int total = n;
        int empty = 0 ;
        int cnt ;
        while(n>=e){
            empty = n%e;
            cnt = n/e ;
            total += cnt;
            n = cnt + empty;
        }
        return total;
    }
};