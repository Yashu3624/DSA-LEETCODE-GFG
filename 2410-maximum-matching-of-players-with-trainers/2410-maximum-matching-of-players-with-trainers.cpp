class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n = players.size() ; 
        int m = trainers.size() ; 
        sort(begin(players) , end(players)) ;
        sort(begin(trainers) , end(trainers)) ;
        int i = 0 , j = 0 , cnt = 0 ; 
        while(i<n && j < m){
            if(players[i]<= trainers[j]){
                i++ ; 
                cnt++ ; 
            }
            j++ ; 
        }
        return cnt ;
    }
};