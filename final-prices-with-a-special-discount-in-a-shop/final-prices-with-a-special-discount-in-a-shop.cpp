class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>res;
        int n = prices.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                if(prices[i]>=prices[j]){
                    prices[i]= prices[i]-prices[j] ;
                    break;
                }

            }
        res.push_back(prices[i]);
        }
        return res;
    }
};