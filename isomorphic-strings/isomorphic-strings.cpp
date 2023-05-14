class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int res1[256]={0};
        int res2[256]={0};
        for(int i = 0 ; i < s.size() ; i++){
            if(res1[s[i]]!=res2[t[i]])
                return false;
            res1[s[i]]= i+1;
            res2[t[i]]=i+1;
        }
        return true;
    }
};