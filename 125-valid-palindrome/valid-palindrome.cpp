class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(isalnum(s[i])){
                ans += tolower(s[i]);
            }
        }
        string res =ans;
         reverse(ans.begin(),ans.end());
        return res==ans;
    }
};