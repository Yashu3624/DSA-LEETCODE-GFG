class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int>res;

        for(auto it : rectangles){
            int mini = min(it[0],it[1]);
            res.push_back(mini);
        }
        int n  = res.size();

        int maxi = 0 , cnt = 0 ; 
        for(int i = 0 ; i < n ; i++ ){
            if(res[i]>maxi)
                maxi = res[i];
        }
        for(auto it : res){
            if(it==maxi){
                cnt++;
            }
        }
        return cnt;
    }
};