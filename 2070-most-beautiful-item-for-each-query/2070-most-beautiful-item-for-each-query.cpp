class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin() , items.end());
        vector<int>maxi_beauty ;
        vector<int>res ;
        vector<int>price ;
        for(int i = 0 ; i < items.size() ; i++){
            price.push_back(items[i][0]) ;
        }
        int beauty = 0 ; 
        for(int i = 0 ; i < items.size() ; i++){
            
            beauty = max(beauty , items[i][1]) ; 
            maxi_beauty.push_back(beauty) ;
        }
        for(int i = 0 ; i < queries.size() ; i++){
            int ub = upper_bound(price.begin(),price.end() , queries[i]) - price.begin() ; 
            int ans = ((ub==0)?0:maxi_beauty[ub-1]) ; 
            res.push_back(ans) ;
        }
        return res ;

    }
};