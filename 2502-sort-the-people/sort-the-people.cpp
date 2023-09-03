class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
      map<int,string>mp;
      vector<string>res;
      for(int i = 0 ; i < heights.size() ; i++){
        mp[heights[i]] = names[i];  
    }
    sort(heights.rbegin(),heights.rend());
    for(int i = 0 ; i < heights.size() ; i++){
        res.push_back(mp[heights[i]]);
    }
    return res;
    }
};