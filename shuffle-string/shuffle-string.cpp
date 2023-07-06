class Solution {
public:
    string restoreString(string s, vector<int>& idx) {
        string res = s ;
        int n = s.size();
        for(int i  = 0 ; i < n ; i++){
            res[idx[i]] = s[i];
        }
        return res;
    }
};