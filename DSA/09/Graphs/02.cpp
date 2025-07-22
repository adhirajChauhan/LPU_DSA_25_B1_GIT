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



//---------------------------

// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

// class Solution {
//   public:
  
//   void dfsHelper(int node,vector<vector<int>>& adj, vector<bool> &visited, vector<int> & result){
//       visited[node] = true;
//       result.push_back(node);
      
//       //visit all unvisited neighbpurs
//       for(int neighbour : adj[node]){
//           if(!visited[neighbour]){
//               dfsHelper(neighbour, adj, visited, result);
//           }
//       }
//   }
//     vector<int> dfs(vector<vector<int>>& adj) {
        
//         int V = adj.size();
//         vector<bool> visited(V, false);
//         vector<int> result;
        
//         dfsHelper(0, adj, visited, result);
//         return result;
        
//     }
// };


//----------------------------


// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
// #include <bits/stdc++.h>

// class Solution {
//   public:
  
//     bool bfs(int start, vector<vector<int>>& adj, vector<bool>& visited){
      
//         queue<int> q;
//         unordered_map<int, int> parent;
        
//         visited[start] = true;
//         q.push(start);
//         parent[start] = -1;
        
//         while(!q.empty()){
//             int temp = q.front();
//             q.pop();
            
//             for(int neighbour : adj[temp]){
//                 if(!visited[neighbour]){
//                     visited[neighbour] = true;
//                     q.push(neighbour);
//                     parent[neighbour] = temp;
//                 }
//                 else if(parent[temp] != neighbour){
//                     //if neighbour is visited and not parent, then cycle exist
//                     return true;
//                 }
//             }
//         }
//         return false;
        
        
//     }
//     bool isCycle(int V, vector<vector<int>>& edges) {
        
//         //Create adj list
//         vector<vector<int>> adj(V);
        
//         for(auto edge : edges){
//             int u = edge[0];
//             int v = edge[1];
            
//             adj[u].push_back(v);
//             adj[v].push_back(u);
            
//         //Visit all components
//         vector<bool> visited(V, false);
//         for(int i = 0; i < V; i++){
//             if(!visited[i]){
//                 if(bfs(i, adj, visited)){
//                     return true;
//                 }
//             }
//         }
        
            
//         }
//         return false;
//     }
// };

// cycle detection using dfs in undirected graphs

// class Solution {
//   public:
  
//   bool dfs(int node, vector<vector<int>>& adj, vector<bool> &visited, unordered_map<int, int> &parent){
//       visited[node] = true;
      
//       for(int neighbor : adj[node]){
//           if(!visited[neighbor]){
//               parent[neighbor] = node;
              
//               if(dfs(neighbor, adj, visited, parent)){
//                   return true;
//               }
//           }
//           else if(parent[node] != neighbor){
//               //if already visited and not parent => cycle exist
//               return true;
//           }
//       }
      
//       return false;
//   }
//     bool isCycle(int V, vector<vector<int>>& edges) {
        
//         vector<vector<int>> adj(V);
//         for(auto edge : edges){
//             int u = edge[0], v = edge[1];
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
        
//         vector<bool> visited(V, false);
        
//         for(int i = 0; i < V; i++){
//             if(!visited[i]){
//                 unordered_map<int, int> parent;
//                 parent[i] = -1;
                
//                 if(dfs(i, adj, visited, parent)){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };