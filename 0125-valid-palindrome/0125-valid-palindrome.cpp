class Solution {
public:
    bool isPalindrome(string s) {
        string new_s = "";
        for(char ch : s){
            if(isalnum(ch)){
                new_s += tolower(ch) ;
            }
        }
        int i = 0, j =new_s.size()-1 ; 
        while(i<j){
            if(new_s[i]==new_s[j]){
                i++;
                j-- ;
            }
            else{
                return false ;
            }
        }
        return true ; 
        
    }
};