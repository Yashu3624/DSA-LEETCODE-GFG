class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        int mini = INT_MAX ; 
        sort(arr.begin() , arr.end());
        for(int i = 0 ; i < arr.size() -1 ; i++)
        mini = min(mini,arr[i+1]-arr[i]);
        
        vector<vector<int>>res;
        for(int i = 0 ; i < arr.size()-1 ;i++)
        if(arr[i+1]-arr[i]==mini)
            res.push_back({arr[i],arr[i+1]});

        return res;

    }
};