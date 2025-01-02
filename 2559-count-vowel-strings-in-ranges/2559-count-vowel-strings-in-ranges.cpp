class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size() ; 
        vector<int>prefix(n+1,0) ; 
        unordered_set<char>v = {'a' , 'e' , 'i' , 'o' , 'u'} ; 
        for(int i = 0 ; i < n ; i++){
            prefix[i+1] = prefix[i] ; 
            if(v.count(words[i].front()) && v.count(words[i].back())){
                prefix[i+1]++ ; 
            }
        }
        vector<int>ans ; 
        for(auto it : queries){
            int left = it[0] , right = it[1] ; 
            ans.push_back(prefix[right+1]-prefix[left]) ; 
        }
        return ans ;
    }
};