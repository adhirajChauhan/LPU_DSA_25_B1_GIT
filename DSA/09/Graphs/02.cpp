https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        int V = adj.size();
        vector<int> bfsResult;
        vector<bool> visited(V, false);
        queue<int> q;
        
        //start BFS from node 0;
        
        q.push(0);
        visited[0] = true;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfsResult.push_back(node);
            
            //visit all unvisited neighbours
            
            for(int neighbour : adj[node]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
            
        }
        return bfsResult;
        
    }
};