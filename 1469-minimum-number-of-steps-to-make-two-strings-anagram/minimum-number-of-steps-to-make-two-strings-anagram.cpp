class Solution {
public:
    int minSteps(string s, string t) {
        int ans = 0;
        
        unordered_map<char,int>mp;
        for(auto ch : s){
            mp[ch]++;
        }
        for(auto ch : t){
            mp[ch]--;
        }
        for(auto ch: mp){
            ans += abs(ch.second);
        }
        return ans/2;

    }
};