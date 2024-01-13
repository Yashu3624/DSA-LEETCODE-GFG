class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>mp1(26,0),mp2(26,0);
        int sol = 0;
        for(auto ch : s){
            mp1[ch-'a']++;
        }
        for(auto ch : t){
            mp2[ch-'a']++;
        }
        for(int i = 0 ; i < 26 ; i++){
            if(mp1[i]>mp2[i]) 
            sol += mp1[i]-mp2[i];

        }
        return sol;

    }
};