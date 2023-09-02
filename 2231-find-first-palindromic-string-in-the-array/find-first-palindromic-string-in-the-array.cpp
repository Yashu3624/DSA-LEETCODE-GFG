class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto word : words){
            string w = word  ;
            reverse(word.begin(),word.end());
            if(w==word) return w ;
        }
        return "";
    }
};