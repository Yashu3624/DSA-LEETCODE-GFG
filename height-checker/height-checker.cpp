class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>s;
        int cnt = 0;
        for(int i = 0 ; i < heights.size() ; i++){
            s.push_back(heights[i]);
        }
        sort(s.begin() , s.end());
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]!=heights[i]){
                cnt++;
            }
        }
        return cnt;
    }
};