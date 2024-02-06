class Solution {
public:
    vector<string> sortPeople(vector<string>& name, vector<int>& h) {
         priority_queue<pair<int,string>> p;
         for(int i = 0 ; i < h.size() ; i++){
             p.push({h[i],name[i]});
         } 
         vector<string>res ;
         while(!p.empty()){
             res.push_back(p.top().second);
             p.pop();
         }
         return res;

    }
};