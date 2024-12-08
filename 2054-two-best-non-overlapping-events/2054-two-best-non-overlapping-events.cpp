class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin() , events.end()) ; 
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq ;
        int maxVal = 0 , maxSum = 0; 
        for(int i = 0 ; i  < event.size(); i++){
            while(pq.size() && pq.top().first < event[0]){
                maxVal = max(maxVal , pq.top().second) ; 
                pq.pop(); 
            }
            maxSum = max(maxSum , maxVal+event[i][2]) ; 
            pq.push({event[i][1] , event[i][2]}) ; 
        }
        return maxSum ; 
    }
};