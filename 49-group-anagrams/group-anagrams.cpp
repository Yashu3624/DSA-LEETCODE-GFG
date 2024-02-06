class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<string ,vector<string>>mp ;
    for(auto& word:strs){
        string s = word;
        sort(s.begin(),s.end());
        if(mp.find(s)==mp.end()){
            mp[s] = {word};
        }
        else{
            mp[s].push_back(word);
        }
    }
    vector<vector<string>>res ;
    for(auto& it : mp){
        res.push_back(it.second);
    }
    return res;
        
    }
};