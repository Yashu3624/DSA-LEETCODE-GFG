class Solution {
public:
    int maxPower(string s) {
        int cnt = 0 ;
        int maxi = 0 ;
        for(int i = 0 ; i < s.size()-1 ; i++){
            if(s[i]==s[i+1]){
                cnt++;
                if(cnt>maxi){
                    maxi = cnt ;
                }
            }
                else{
                    cnt = 0 ;
                }
            
        }
        return maxi+1;
    }
};