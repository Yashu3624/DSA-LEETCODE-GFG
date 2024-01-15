class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>win;
        vector<int>loss; 
        for(int i = 0 ; i < matches.size(); i++){
            win.push_back(matches[i][0]);
            loss.push_back(matches[i][1]);
        }
        vector<int>l ;
        vector<int>w; 
        map<int,int>mp1 ;
        for(int i = 0 ; i < loss.size() ; i++){
            mp1[loss[i]]++;
        }
        for(auto it : mp1){
            if(it.second==1){
                l.push_back(it.first);
            }
        }

      for (int i = 0; i < win.size(); i++) {
            if (mp1.find(win[i]) == mp1.end()) {
                if (find(w.begin(), w.end(), win[i]) == w.end()) {
                    w.push_back(win[i]);
                }
            }
        }

        vector<vector<int>>ans ;
        sort(w.begin() ,w.end());
        ans.push_back(w);
        ans.push_back(l);
        return ans;
    }
};