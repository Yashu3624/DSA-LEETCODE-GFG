class Solution {
public:
    bool check(string& s , int i , int j ){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int idx = 0 ;
        int maxi = 0 ;  
        for(int i = 0 ; i < s.size() ; i++){
            for(int j = i ; j < s.size() ; j++){
                if(check(s,i,j)){
                    if(maxi<j-i+1){
                        maxi = j-i+1 ;
                        idx = i ;
                    }
                }
            }
        }
        string ans =  s.substr(idx,maxi);
        return ans ;
    }
};