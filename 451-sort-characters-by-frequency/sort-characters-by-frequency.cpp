class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        unordered_map<char,int>mp ;
        for(int i = 0 ; i < s.size(); i++){
            mp[s[i]]++;
        }
         priority_queue<pair<int,char>> p ; 
         for(auto it : mp)
         {
            p.push({it.second,it.first});
         }
         
         while(!p.empty()){
             int n = p.top().first;
            while(n--){
                ans += p.top().second;
            }
            p.pop();
         }
         return ans;
    }
};