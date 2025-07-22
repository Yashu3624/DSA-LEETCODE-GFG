class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0  , r = 0 , maxi = 0 , len = 0 ; 
        int n = s.size(); 
        vector<int>mp(256,-1);
        while(r<n){
            if(mp[s[r]]!=-1){
                if(mp[s[r]]>=l)
                l = mp[s[r]]+1;
            }
            len = r-l+1 ; 
            maxi = max(maxi,len);
            mp[s[r]]=r ;
            r++;
        }
        return maxi ;
    }
};