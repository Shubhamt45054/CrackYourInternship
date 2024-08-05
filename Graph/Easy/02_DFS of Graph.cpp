 vector<int> ans;
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node,int vis[],vector<int> adj[]){
        vis[node]=1;
        ans.push_back(node);
        for(auto i:adj[node]){
            if(!vis[i]){
                dfs(i,vis,adj);
            }
        }
    }
    
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        int vis[v]={0};
        dfs(0,vis,adj);
        return ans;
    }
