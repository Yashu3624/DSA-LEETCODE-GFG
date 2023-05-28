class Solution {
public:
    int countConsistentStrings(string allow, vector<string>& words) {
        
        map<char , int > mp;
        int cnt = 0 , c = 0 ;
        for(auto i : allow){
            mp[i]++;
        }
        for(auto word : words){
            for(auto ch : word){
                if(mp.find(ch)==mp.end())
                {
                    c =1 ;
                    break;
                }
            }
            if(c!=1){
                cnt++;
            }
            c = 0 ;
        }
        return cnt;


    }
};