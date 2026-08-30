#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;


class Solution {
    bool solve(int val, unordered_map<int, list<int>>& m,
               unordered_map<int, bool>& vis) {
        unordered_map<int, int> parent;
        parent[val] = -1;
        vis[val] = true;
        queue<int> q;
        q.push(val);
        
        while(!q.empty()) {  
            
            // ✅ Fixed: !q.empty()
            int front = q.front();
            q.pop();
            
            for(auto neighbour : m[front]) {
                if(vis[neighbour] && neighbour != parent[front]) {
                    return true;  // Cycle detected
                }
                else if(!vis[neighbour]) {
                    q.push(neighbour);
                    vis[neighbour] = true;
                    parent[neighbour] = front;
                }
            }
        }
        return false;
    }
    
public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        unordered_map<int, list<int>> m;
        unordered_map<int, bool> vis;
        
        // ✅ Correct graph building from edges
        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            m[u].push_back(v);
            m[v].push_back(u);  // For undirected graph
        }
        
        // ✅ Loop through all vertices (0 to V-1)
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                bool ans = solve(i, m, vis);
                if(ans) {
                    return true;
                }
            }
        }
        return false;
    }
};