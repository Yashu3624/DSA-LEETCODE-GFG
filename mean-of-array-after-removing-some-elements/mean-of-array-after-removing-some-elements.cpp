class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int per = (n*5)/100;
        double sum = 0;
        for(int i = per ; i < n-per ; i++){
            sum += arr[i];
        }
        int t = n - 2*per;
        return sum/t;
    }
};