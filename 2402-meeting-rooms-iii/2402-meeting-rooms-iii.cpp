class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        vector<int>roomUsedCnt(n,0) ; 
        int m = meetings.size(); 
        sort(meetings.begin() , meetings.end()) ; 
        vector<long long > lastAvailable(n,0) ;
        for(vector<int>meet: meetings){
            bool found = false ;
            int start = meet[0] ; 
            int end = meet[1] ; 
            int duration = end - start ;
            long long earlyEndRoomTime = LLONG_MAX ; 
            int earlyEndRoom = 0 ;

            for(int room = 0 ; room < n ; room++){
                if(lastAvailable[room] <= start){
                    lastAvailable[room] = end ; 
                    roomUsedCnt[room]++ ; 
                    found = true ;
                    break;
                }
                if(lastAvailable[room]<earlyEndRoomTime){
                    earlyEndRoomTime = lastAvailable[room] ; 
                    earlyEndRoom  = room ; 
                }

            }
                            if(!found ){
                    lastAvailable[earlyEndRoom] += duration ;
                    roomUsedCnt[earlyEndRoom]++ ;  
                }
        }
        int result = -1 ; 
        int maxUse = 0 ;
        for(int room = 0 ; room < n ; room++){
            if(roomUsedCnt[room]>maxUse){
                maxUse = roomUsedCnt[room] ; 
                result = room ;
            }

        }
        return result ;
    }
};