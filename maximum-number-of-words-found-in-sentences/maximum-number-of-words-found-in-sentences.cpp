class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int maxi = 0 ;
        for(int i = 0 ; i < s.size() ; i++){
            string ss = s[i];
            int cnt = 0;
            for(int j = 0 ; j < ss.size() ; j++){
                if(ss[j]==' ' && ss[j+1]!=' ')
                cnt++;
            }
            maxi = max(maxi,cnt);
        }
        return maxi+1;
    }
};