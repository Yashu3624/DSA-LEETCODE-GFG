class Solution {
public:
    bool check(string& word ,unordered_map<int,int>&mp){
        unordered_map<int,int>cnt ;
        for(char ch : word){
            cnt[ch]++;
        }
        for(auto it : cnt){
            if(mp[it.first]<it.second)
            return false;
        }
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        int n = words.size() ;
        unordered_map<int,int>mp ;
        int cnt = 0 ;
        for(auto it : chars){
            mp[it]++;
        }
        for(auto it:words){
            if(check(it,mp)){
                cnt += it.size() ;
            }
        }
        return cnt ;
    }
};