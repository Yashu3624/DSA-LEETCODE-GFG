class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0 ;
        for(int i = 0 ; i < details.size() ; i++){
            string s = details[i];
            s = s.substr(11,2) ;
            int n = stoi(s) ; 
            if(n>60) cnt += 1; 
            
        }
        return cnt ;
    }
};