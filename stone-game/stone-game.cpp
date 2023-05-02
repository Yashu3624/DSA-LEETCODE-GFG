class Solution {
public:
    bool stoneGame(vector<int>& p) {
        int a = 0 , b = 0 ;
        sort(p.begin(),p.end());
        reverse(p.begin(),p.end());
        for(int i = 0 ; i < p.size() ;i++){
            if(i%2==0)
            a += p[i];
            else
            b += p[i];
        }
        if(a>=b)
        return true;
        else
        return false;
        
    }
};