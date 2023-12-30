class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int>freq(26);
        for(int i = 0 ; i < words.size() ; i++){
            for(auto & c: words[i]){
                freq[c-'a']++;
            }
        }
        int n = words.size();
        for(int i = 0 ; i < 26 ; i++){
            if(freq[i] && freq[i]%n!=0) return false ;
        }
        return true ;
    }
};