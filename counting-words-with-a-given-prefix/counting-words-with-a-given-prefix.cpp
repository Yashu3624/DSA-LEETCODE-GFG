class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res = 0 ;
     
        int l = pref.size();
        for(auto word: words){
            int c =0;
            for(int i = 0 ; i < l ; i++){
                if(word[i]!=pref[i])
                    break;
                else
                    c++;
            }
            if(c==l)
            res++;
        }
        return res;
    }
};