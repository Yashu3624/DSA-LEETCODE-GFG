class Solution {
public:
    int countDays(int days, vector<vector<int>>& meet) {
        sort(meet.begin() , meet.end()) ; 
        int start = meet[0][0] ; 
        int end = meet[0][1] ; 
        for(int i = 1 ; i  < meet.size() ; i++){
            if(meet[i][0]<= end){
                end = max(meet[i][1],end) ; 
            }
            else{
                days -= end - start + 1 ;
                start = meet[i][0] ; 
                end = meet[i][1] ; 
            }
        }
        days -= end-start+1 ; 
        return days ; 
    }
};