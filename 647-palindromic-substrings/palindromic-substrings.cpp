class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        vector<vector<bool>>pd(n,vector<bool>(n,false));
        int ans = 0 ;
        for(int i = 0 ; i < n ; i++){
            pd[i][i] = true ;
            ans++;
        }
        for(int i = 0 ; i < n-1 ; i++){
            if(s[i]==s[i+1]){
                pd[i][i+1] = true ;
                ans++;
            }
        }
        for(int i = 3 ; i <= n ; i++){
            for(int j = 0 ; j < n-i+1 ; j++){
                if(s[j]==s[j+i-1] && pd[j+1][j+i-2]){
                    pd[j][j+i-1] = true ;
                    ans++;
                }
            }
        }
        return ans;
    }
};