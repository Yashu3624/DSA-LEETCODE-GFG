class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int cnt = 0 ;
        int n = bank.size();
        int m = bank[0].size();
        vector<int>temp;
        for(int i = 0 ; i < n ; i++){
            int laser = 0;
            for(int j = 0 ; j < m ; j++){
                if(bank[i][j]=='1'){
                    laser++;
                }
            }
            temp.push_back(laser);
        }
       int prev =0 ;
      
       for(int i = 0 ; i < n ; i++){
           if(temp[i]!=0){
               cnt += prev*temp[i];
               prev = temp[i];
           }
       }
       return cnt;
        
    }

};