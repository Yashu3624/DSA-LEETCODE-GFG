class Solution {
public:
bool checkPalidrome(long long start){
        string s = to_string(start);
    string rev = s;
    reverse(rev.begin(), rev.end());  

    return s == rev;
}
bool basePalindrome(long long start, int k) {
    vector<int> digits;

   
    while (start > 0) {
        digits.push_back(start % k);
        start /= k;
    }

    int left = 0, right = digits.size() - 1;
    while (left < right) {
        if (digits[left] != digits[right])
            return false;
        left++;
        right--;
    }
    return true ; 
    }
    long long kMirror(int k, int n) {
        long long cnt = 0 ;
        long long sum = 0 ; 
        long long  start = 1  ; 
        while(cnt!=n){
            if(checkPalidrome(start) && basePalindrome(start,k)){
                cnt += 1 ;
                sum += start ; 
            }
            start += 1 ;

        }
        return sum ; 

    }
};