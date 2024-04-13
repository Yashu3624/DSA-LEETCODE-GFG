class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int n = card.size() ; 
        int lsum = 0 , rsum = 0 , ridx = n-1 ; 
        int maxi = 0 ; 
        for(int i  = 0 ; i < k ; i++){
            lsum += card[i];
        }
        maxi = lsum ; 
        for(int i = k-1 ; i >= 0 ; i--){
            lsum -= card[i];
            rsum += card[ridx--];
            maxi = max(maxi , lsum +rsum );
        }
        return maxi ;
    }
};