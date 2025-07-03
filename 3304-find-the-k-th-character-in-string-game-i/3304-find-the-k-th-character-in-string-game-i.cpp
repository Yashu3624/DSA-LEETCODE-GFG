class Solution {
public:
    char kthCharacter(int k) {
        string word = "a" ; 
        while(word.size()<k){
            string res = "";
            for(int i = 0 ; i < word.size() ; i++){
                res +=  word[i]+1 ; 
            }
            word = word + res ; 
        }
        return word[k-1] ; 
    }
};