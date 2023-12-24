class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        if(n==1) return 0;
        int cnt = 0 ; 
        for(int i = 0 ; i < n ; i++){
            if(i % 2 == 0 && s[i] == '1') cnt++;
            if(i % 2 != 0 && s[i] != '1') cnt++;
        }
        int res = n-cnt ;
        return min(res,cnt) ;
    }
};