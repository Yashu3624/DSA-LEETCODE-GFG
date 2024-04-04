class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0 ; 
        int maxi = 0 ; 
        for(char c : s){
            if(c=='('){
                cnt++;
                if(maxi<cnt)
                    maxi = cnt ;
            }
                else if(c==')'){
                    cnt--;
                }
            }
        return maxi ;
    }
};