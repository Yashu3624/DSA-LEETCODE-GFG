class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>res ;
        for(int i = 0 ; i < arr.size() ; i++){
            res[arr[i]]++;
        }
        int ans = -1 ;
        for(auto i : res){
            if(i.first==i.second){
                ans = max(ans,i.first);
            }
        }
        return ans;
    }
};