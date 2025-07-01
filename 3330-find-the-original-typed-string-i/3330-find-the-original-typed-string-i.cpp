class Solution {
public:
    int possibleStringCount(string word) {
        unordered_map<char,int>mp ; 
        for(char ch : word){
            mp[ch]++ ;
        }
        int res = 0 ;
        for(auto it : mp){
            res += it.second-1 ;
        }
        return res+1 ;
    }
};