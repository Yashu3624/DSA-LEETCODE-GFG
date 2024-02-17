class Solution {
public:
    int furthestBuilding(vector<int>& heights, int b, int l) {
        priority_queue<int>p ; 
        int i = 0 ;
        int diff = 0 ; 
        for( i = 0 ; i < heights.size()-1 ; i++){
            diff = heights[i+1]-heights[i];
            if(diff<=0)  continue ;
            b -= diff ;
            p.push(diff);
            if(b<0){
                b += p.top();
                p.pop();
                l--;
            }
            if(l<0) break;
        }
        return i;
    }
};