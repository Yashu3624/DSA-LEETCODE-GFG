class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string ,int>mp ;
        int ans = 0  ;
        for(auto it: words){
            string rev = it ;
            reverse(rev.begin() , rev.end());
            if(mp[rev]>0)
            ans++ ;
            else
            mp[it]++;
        }
        return ans;
    }
};