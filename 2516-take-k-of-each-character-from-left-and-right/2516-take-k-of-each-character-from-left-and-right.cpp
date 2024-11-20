class Solution {
public:
    int takeCharacters(string s, int k) {
        int cntA  = 0 , cntB = 0 , cntC = 0  ; 
        int n = s.size() ; 
    
        for(int i = 0 ; i < n ; i++){
            if(s[i]=='a') cntA += 1 ; 
            if(s[i]=='b') cntB += 1 ; 
            if(s[i]=='c') cntC += 1 ; 
        }
            if(cntA<k || cntB<k || cntC <k) return -1 ; 
            int remA = cntA- k ; 
            int remB = cntB- k ; 
            int remC = cntC- k ; 
            cntA = cntB = cntC = 0 ; 
            int ans = 0 , j = 0 ; 
            for(int i = 0 ; i < n ; i++){
                cntA += (s[i]=='a') ; 
                cntB += (s[i]=='b') ; 
                cntC += (s[i]=='c') ; 
               while((cntA > remA || cntB > remB || cntC > remC)){

                    cntA -= (s[j]=='a') ; 
                    cntB -= (s[j]=='b') ; 
                    cntC -= (s[j]=='c') ;
                    j++ ;
                }
                ans = max(ans , i-j+1)  ;
            }

        
        return n-ans ; 
    }
};