class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp ;
        for(int i : arr){
            mp[i]++;
        }
        priority_queue<int, vector<int>,greater<int>>q ;
        for(auto it : mp){
            q.push(it.second);
        }
        while(k>0){
            k -= q.top();
            if(k>=0) q.pop();
            
        }
        return q.size();

    }
};