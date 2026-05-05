class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false ; 
        string str =   goal + goal ; 
        return str.find(s)!=-1 ; 
    }
};