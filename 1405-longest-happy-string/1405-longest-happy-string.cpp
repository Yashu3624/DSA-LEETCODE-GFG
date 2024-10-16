class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string ans = "" ;
        priority_queue<pair<int,char>>pq;
        if(a>0) pq.push({a,'a'}) ;
        if(b>0) pq.push({b,'b'}) ;
        if(c>0) pq.push({c,'c'}) ; 
        while(!pq.empty()){
            int cnt = pq.top().first ;
            char ch1 = pq.top().second ;
            pq.pop() ;
            if(ans.size()>=2 && ans.back()==ch1 && ans[ans.size()-2]==ch1){
                if(pq.empty()) break ;
                int cnt1 = pq.top().first ;
                int ch2 = pq.top().second ;
                pq.pop();
                ans += ch2 ; 
                cnt1-- ;
                if(cnt1) pq.push({cnt1,ch2}) ;
                pq.push({cnt,ch1}) ;
            }
            else{
                ans += ch1 ;
                cnt--;
                if(cnt>0) pq.push({cnt,ch1}) ;

            }

        }
        return ans ;
    }
};