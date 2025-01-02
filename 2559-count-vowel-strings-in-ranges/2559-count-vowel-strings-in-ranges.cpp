class Solution {
public:
    vector<int> vowelStrings(vector<string>& word, vector<vector<int>>& q) {
        vector<int>res ; 
        for(int i = 0 ; i < q.size() ; i++ ){
            int start = q[i][0] ; 
            int end = q[i][1] ; 
            int cnt = 0 ;
            for(int j = start ; j <= end ; j++){
                int n = word[j].size() ; 
                int first = word[j][0] ; 
                int last = word[j][n-1] ; 
                if((first=='a' || first=='e' || first=='i' || first=='o' || first == 'u')&&(last=='a' || last=='e' || last=='i' || last=='o' || last=='u')){                 cnt += 1 ; 

                }
            }
            res.push_back(cnt) ; 
        }
        return res ; 
    }
};