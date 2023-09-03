class Solution {
public:

    void reverse(vector<int>& a , int n ){
        int start = 0 ; 
        int end = n-1 ;
        while(start<=end){
            swap(a[start],a[end]);
            start++;
            end--;
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>res ; 
        int n = image.size();
        for(auto a : image){
            for(int i = 0 ; i < n ; i++){
                a[i] = a[i]==1?0:1;
            }
            reverse(a,n);
            res.push_back(a);
        }
        return res ; 
    }
};