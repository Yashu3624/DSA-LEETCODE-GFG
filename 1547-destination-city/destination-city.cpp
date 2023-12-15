class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>mp ;
        for(int i = 0 ; i < paths.size() ; i++){
            mp[paths[i][0]]++;
        }
        for(int i = 0 ; i < paths.size(); i++){
            string res = paths[i][1];
            if(mp.find(res)==mp.end()) return res;
        }
        return "";
    }
};