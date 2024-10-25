class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin() ,folder.end()) ;
        vector<string>res ; 
        res.push_back(folder[0]) ; 
        string prev = folder[0] ; 
        for(int i = 1 ; i < folder.size() ; i++){
            int last = prev.size(); 
            if(folder[i].substr(0,last) == prev && folder[i].size()>last && folder[i][last]=='/'){
                continue ;
            }
            else{
                res.push_back(folder[i]) ; 
                prev = folder[i] ; 
            }
        }
        return res ;
    }
};