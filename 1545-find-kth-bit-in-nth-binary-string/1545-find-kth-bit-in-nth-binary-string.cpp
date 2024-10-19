class Solution {
public:
    string reverseString(string s  ){
        string ans = "" ;
        for(char i: s){
            if(i=='0'){
                ans += '1' ;
            }
            else{
                ans += '0' ;
            }
        }
        reverse(ans.begin() , ans.end()) ;
        return ans;
    }
    char findKthBit(int n, int k) {
        string s1 = "0" ;
        for(int i = 1 ; i <= n ; i++){
            string s = s1 ;
            s1 = s + "1" + reverseString(s) ;
        }
        return s1[k-1] ; 
    }
};