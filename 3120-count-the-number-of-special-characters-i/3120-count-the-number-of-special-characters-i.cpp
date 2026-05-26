class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mp ; 
        for(int i = 0 ; i < word.size();i++){
            mp[word[i]]++;
        }
        int cnt = 0 ; 
        for(auto it: mp){
            char s = it.first ;
            if((mp.find(s+32)!=mp.end())||(mp.find(s-32)!=mp.end())){
                cnt++ ;
            }
        }
        return cnt/2 ;
        
    }
};