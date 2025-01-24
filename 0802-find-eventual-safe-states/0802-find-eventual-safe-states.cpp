class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v = graph.size() ; 
        vector<int>indegree(v,0) ; 
        vector<int>adj[v] ;
        queue<int>q ;  
        for(int i =0 ; i < v ; i++){
            for(auto it : graph[i]){
                adj[it].push_back(i) ; 
                indegree[i]++ ; 
            }
        }
        for(int i = 0 ; i < v ; i++){
            if(indegree[i]==0) q.push(i) ;
        }
        vector<int>res ; 
        while(!q.empty()){
            int node =q.front(); 
            q.pop() ; 
            res.push_back(node) ; 
            for(auto it : adj[node]){
                indegree[it]-- ; 
                if(indegree[it]==0) q.push(it) ;
            } 
        }
        sort(res.begin(),res.end()) ;
        return res; 
    }
};