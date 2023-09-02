class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int>res;
        for(auto it : rectangles){
            int mini = min(it[0],it[1]);
            res.push_back(mini);
        }
        sort(res.begin(),res.end());
        reverse(res.begin(),res.end());
        int cnt = 1;
        for(int i = 1 ; i < res.size() ; i++){
            if(res[i]==res[0]) cnt++;
        }
        return cnt;
    }
};