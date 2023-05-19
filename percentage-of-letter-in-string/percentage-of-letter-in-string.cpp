class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt = 0 ;
        int len = s.size();
        for(int i = 0 ; i < len ; i++){
            if(s[i]==letter){
                cnt++;
            }
        }
        int res = (cnt*100)/len;
        return res;
    }
};