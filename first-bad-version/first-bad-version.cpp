// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int start = 1 ;
        long int end = n ;
        long int res ;
        long int mid = (start+end)/2;
        while(start<=end){
            if(isBadVersion(mid)){
                res = mid;
                end = mid-1;
            }
            else
            start = mid +1;
            mid = (start+end)/2;
        }
        return res;
    }
};