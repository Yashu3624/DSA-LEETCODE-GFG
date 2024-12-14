class Solution {
 

public:
     void dfs(int node ,vector<int>& vis ,vector<int>adjList[]){
        vis[node] =1 ;
        for(auto it : adjList[node]){
            if(!vis[it]){
                dfs(it ,  vis, adjList);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int  v = isConnected.size() ; 
       vector<int>adjList[v];
        vector<int>vis(v,0);
     
        for(int i = 0 ; i < v ; i++){
            for(int j  = 0 ; j < v ; j++){

                if(isConnected[i][j] ==1  && i!=j){
                    adjList[i].push_back(j) ; 
                    adjList[j].push_back(i) ; 
                }
            }
        }
        int cnt = 0 ;
        for(int i = 0; i < v ; i++){
            if(!vis[i]){
                cnt++;
                dfs(i ,  vis , adjList);

            }
        }
        return cnt ; 



    }
};