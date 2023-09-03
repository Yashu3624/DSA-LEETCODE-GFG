class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>res ; 
        for(auto a : image){
            for(int i = 0 ; i < image[0].size() ; i++){
                if(a[i]==1){
                    a[i] = 0 ; 
                }
                else{
                    a[i] = 1 ; 
                }
            }
            reverse(a.begin() ,a.end());
            res.push_back(a);
        }
        return res ; 
    }
};