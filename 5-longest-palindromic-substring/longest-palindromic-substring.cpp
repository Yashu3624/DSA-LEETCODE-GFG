class Solution {
private:
bool checks(string &s , int i , int j){
    while(i<j){
        if(s[i]!=s[j]){
            return false ;
        }
        i++;
        j--;
    }
    return true;
}
public:
    string longestPalindrome(string s) {
        int n = s.size() ; 
        int idx = 0 ; 
        int max_len = 0 ;
        for(int i = 0 ; i < n ; i++){
            for(int j = i ; j < n ; j++){
                if(checks(s,i,j)){
                    if(j-i+1 >max_len){
                        max_len = j-i+1;
                        idx = i ;
                    }
                }

            }
        }
        return s.substr(idx,max_len);
    }
};