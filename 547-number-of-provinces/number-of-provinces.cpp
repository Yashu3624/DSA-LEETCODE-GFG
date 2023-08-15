class Solution {
public:
    void bfs(int k , vector<int>adjList[] , vector<int>&vis){
        queue<int>q ;
        q.push(k);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            vis[node]=1;
            for(auto it : adjList[node]){
                if(!vis[it]){
                    q.push(it);
                    vis[it] =1 ;
                }
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size() ;
        vector<int>adjList[v];
        for(int i = 0 ;  i < v ; i++){
            for(int j = 0 ; j < v ; j++){
                if(isConnected[i][j]==1 && j!=i){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }
        vector<int>vis(v,0);
        int cnt = 0 ;
        for(int i = 0 ; i < v ; i++){
            if(!vis[i]){
                cnt++;
                bfs(i , adjList , vis);
            }
        }
        return cnt;
    }
};