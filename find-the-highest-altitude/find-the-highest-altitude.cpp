class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>res;
        int sum = 0 ;
        res.push_back(sum);
        for(int i = 0 ; i < gain.size() ; i++){
            sum += gain[i];
            res.push_back(sum);
        }
        return *max_element(res.begin(), res.end());
        
    }
};