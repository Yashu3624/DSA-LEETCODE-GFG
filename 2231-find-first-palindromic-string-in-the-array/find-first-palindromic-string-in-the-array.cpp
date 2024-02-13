class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s;
        int cnt = 0 ;
        for(int i = 0 ;  i < words.size() ; i++){
            s = words[i];
            reverse(words[i].begin(),words[i].end());
            if(s==words[i])
             return s;
        }
        return "";
    }
};