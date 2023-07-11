class Solution {
public:
    vector<int> closestDivisors(int num) {
        int n = sqrt(num+2);
        for(int i = n ; i > 0 ; i--){
            if((num+1)%i==0)
                return {i , (num+1)/i};
            
            if((num+2)%i==0)
                return {i , (num+2)/i};
            
        }
        return {} ;
    }

    
};