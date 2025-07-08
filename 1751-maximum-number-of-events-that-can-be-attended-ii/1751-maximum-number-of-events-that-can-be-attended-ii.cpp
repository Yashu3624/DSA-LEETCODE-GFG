class Solution {
public:
int n ; 
vector<vector<int>>dp ; 
    int solve(vector<vector<int>>&events , int idx , int k){
        if(idx>=n || k ==0){
            return 0 ;
        }
        if(dp[idx][k]!=-1) return dp[idx][k] ; 
        int start = events[idx][0] ; 
        int end = events[idx][1] ; 
        int value = events[idx][2] ; 
        int skip = solve(events , idx+1 , k) ; 
        int j = idx+1 ; 
        for( ; j < n ; j++){
            if(events[idx][1]<events[j][0])
            break ;
        }
        int take = value + solve(events , j,k-1) ; 
        return dp[idx][k] = max(skip,take) ; 

    }
    int maxValue(vector<vector<int>>& events, int k) {
        n = events.size() ; 
        dp.resize(n+1,vector<int>(k+1,-1)) ;
        sort(events.begin() , events.end()) ; 
        return solve(events , 0 , k ) ; 

    }
};