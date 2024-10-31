class Solution {
public:
    long long maxi = 1e16 ;
    long long solve(int r , int f , vector<int>&robot , vector<int>&v , vector<vector<long long >>&dp){
        if(r==robot.size()){
            return 0 ; 
        }
        if(f==v.size()){
            return maxi ;
        }
        if(dp[r][f]!=-1){
            return dp[r][f] ; 
        }
        long long take = abs(robot[r]-v[f] )+solve(r+1 , f+1 , robot , v , dp) ; 
        long long notTake = solve(r , f+1 , robot , v , dp) ; 

        return dp[r][f] = min(take , notTake) ; 

    }
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(robot.begin() , robot.end()) ; 
        sort(factory.begin() , factory.end());
        vector<int>v ; 
        for(auto it : factory){
            int pos = it[0] ;
            int lim = it[1] ; 
            for(int i =  0 ; i < lim ; i++){
                v.push_back(pos) ;
            }
        }
        int n = robot.size()  ; 
        int m = v.size() ; 
        vector<vector<long long >>dp(n , vector<long long>(m,-1)) ; 
        return solve(0,0,robot , v , dp) ;

    }
};