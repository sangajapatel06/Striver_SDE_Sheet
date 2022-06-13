class Solution {
    void fn(int node , vector<int> adj[] , vector<int>&dfs , vector<int> &vis){
        dfs.push_back(node);
        vis[node] = 1;
        
        for(auto it : adj[node]){
            if(!vis[it]){
                fn(it , adj , dfs , vis);
            }
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>dfs;
        vector<int>vis(V,0);
        
        for(int i = 0 ;i < V;i++){
            if(!vis[i]) 
                fn(i , adj , dfs ,vis);
        }
        
        return dfs;
    }
};