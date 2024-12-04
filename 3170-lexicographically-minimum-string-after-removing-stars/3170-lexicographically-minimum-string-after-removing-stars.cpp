class Solution {
public:
    string clearStars(string s) {
        priority_queue<pair<char,int>,vector<pair<char,int>>,greater<pair<char,int>>>pq ;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i]=='*'){
                pq.pop();
            }
            else{
                pq.push({s[i] , -i}) ; 
            }
        }
        vector<int>res;
        
        while(!pq.empty()){
            res.push_back(-pq.top().second) ; 
            pq.pop() ; 
        }
        sort(res.begin(),res.end()) ;
        string ans = "" ; 
        for(int i:res){
            ans += s[i] ; 
        }
        return ans ;

    }
};