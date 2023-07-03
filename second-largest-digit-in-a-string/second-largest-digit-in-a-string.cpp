class Solution {
public:
    int secondHighest(string s) {
        vector<int>res ;
        for(int i = 0 ; i < s.length() ; i++){
            if(isdigit(s[i])){
                res.push_back(s[i]-'0');
            }
        }
        unordered_set<int>num(res.begin(),res.end());
        vector<int>ans(num.begin() , num.end());
        sort(ans.begin() , ans.end());
        if (ans.size()<2)
        return -1;
        return ans[ans.size()-2];
    }
};