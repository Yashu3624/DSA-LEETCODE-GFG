class Solution {
public:
    int maxScore(string s) {
        int maxi = 0 ; 
        int cnt_One =  count(s.begin(),s.end() , '1') ; 
        int cnt_Zero = 0 ; 
        for(int i = 0 ; i < s.size()-1 ; i++){
            if(s[i]=='0')cnt_Zero++ ; 
            else if(s[i]=='1') cnt_One-- ; 
            maxi = max(maxi , cnt_Zero+cnt_One) ; 
        }
        return maxi ; 
    }
};