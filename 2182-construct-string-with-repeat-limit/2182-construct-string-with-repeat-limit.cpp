class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        priority_queue<pair<char , int>>pq ; 
        unordered_map<char,int>mp ; 
        for(char ch :s){
            mp[ch]++ ;
        }
        for(auto it : mp){
            pq.push({it.first , it.second}) ; 
        }
        string ans = "" ; 
        while(!pq.empty()){
            char ch = pq.top().first ; 
            int cnt = pq.top().second ; 
            pq.pop();
            if(cnt>repeatLimit){
                cnt = cnt-repeatLimit ;
                pq.push({ch,cnt}) ; 
            }
            for(int i = 0 ; i < repeatLimit ; i++){
                ans += ch ; 
            }
             
        }
        cout<<ans ; 
        return ans ; 
    }
};