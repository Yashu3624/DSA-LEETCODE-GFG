class Solution {
public:
  
    vector<int> lexicalOrder(int n) {
        vector<string>num; 
        for(int i = 1 ; i <= n ; i++){
            num.push_back(to_string(i)) ; 
        }
        sort(num.begin() , num.end() ) ;
        vector<int>ans ; 
        for(int i = 0 ; i < n ; i++){
            ans.push_back(stoi(num[i])) ; 
        } 
        return ans ; 
    }
};