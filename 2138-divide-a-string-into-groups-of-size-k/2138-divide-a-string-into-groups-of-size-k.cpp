class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        while(s.length()%k!=0){
            s += fill ;
        }
        vector<string>res ; 
        int i = 0 ; 
        while(i<s.length()){
            res.push_back(s.substr(i,k)) ; 
            i += k ; 
        }
        return res ; 
        

    }
};