class Solution {
public:
    int minimumChairs(string s) {
            int curr = 0 ; 
            int maxi = 0 ; 
            for(char ch : s){
                if(ch=='E'){
                    curr += 1 ; 
                }
                else{
                    curr -= 1 ;
                }
                if(curr>maxi){
                    maxi = curr ; 
                }
            }
            return maxi ;
    }
};