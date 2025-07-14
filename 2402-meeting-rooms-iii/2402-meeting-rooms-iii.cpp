class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        vector<long long>lastAvailabelAt(n,0) ; 
        int m = meetings.size() ; 
        sort(begin(meetings),end(meetings)) ; 
        bool found = false ;

        vector<int>roomUsedCnt(n,0) ; 
        for(vector<int>&meet : meetings){
            bool found = false ;
            int start = meet[0] ; 
            int end = meet[1] ;
            int duration = end-start ;
long long earlyEndRoomTime = LLONG_MAX;
            int earlyEndRoom = 0 ;
            for(int room =0 ;room< n ; room++){
                if(lastAvailabelAt[room]<=start){
                    lastAvailabelAt[room] = end ; 
                    roomUsedCnt[room]++ ;
                    found = true;
                    break;
                }
                if(lastAvailabelAt[room] < earlyEndRoomTime){
                    earlyEndRoomTime = lastAvailabelAt[room] ; 
                    earlyEndRoom = room ; 
                }

            }
            if(!found){
                lastAvailabelAt[earlyEndRoom] += duration ; 
                roomUsedCnt[earlyEndRoom]++;

            }
        }
        int result = -1  ;
        int maxUse = 0 ; 
        for(int room = 0 ; room<n ; room++){
            if(roomUsedCnt[room]>maxUse){
                maxUse = roomUsedCnt[room] ; 
                result = room ; 
            }
        }
        return result ; 
    }
};