class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size(); 
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq ; 
        for(int i = 0 ; i < n ; i++){
            pq.push({arr[i] , i}) ; 
        }
        int rank =1 ; 
        while(!pq.empty()){
            int num = pq.top().first ; 
            int idx = pq.top().second ; 
            pq.pop()  ; 
            int next = pq.top().first ; 
            arr[idx] = rank ; 
            if(num!=next) rank++ ;
        }
        return arr ; 
    }
};