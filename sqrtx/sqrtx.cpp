class Solution {
public:
    int mySqrt(int x) {
        int start = 1 ;
        int end = x ;
        long long int mid = start + (end-start)/2 ;
        while(start<=end){
            if(mid*mid==x)
                return mid ;
            else if(mid*mid<x)
                start = mid +1 ;
            else if(mid*mid>x)
                end = mid - 1 ;
        mid = start +(end-start)/2;
        }
        return end;
    }
};