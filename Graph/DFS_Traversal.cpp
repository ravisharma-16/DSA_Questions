#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;


// class Solution {
//     void solve(int node, vector<vector<int>>& adj,
//                vector<bool>& vis, vector<int>& ans) {
//         ans.push_back(node);
//         vis[node] = true;
        
//         for(int neighbor : adj[node]) {
//             if(!vis[neighbor]) {
//                 solve(neighbor, adj, vis, ans);
//             }
//         }
//     }
    
// public:
//     vector<int> dfs(vector<vector<int>>& adj) {
//         int n = adj.size();
//         vector<bool> vis(n, false);
//         vector<int> ans;
        
//         // Start DFS from node 0
//         solve(0, adj, vis, ans);
        
//         return ans;
//     }
// };


class Solution {
    void solve(int node,unordered_map<int,list<int>>&m,
    unordered_map<int,bool>&vis,vector<int>&ans)
    {
        ans.push_back(node);
        vis[node] = true;
        for(auto i : m[node])
        {
            if(!vis[i])
            {
                solve(i,m,vis,ans);
            }
        }
    }
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        unordered_map<int,list<int>>m;
        unordered_map<int,bool>vis;
        vector<int>ans;
        for(int i = 0; i < adj.size(); i++)
        {
            // int u = adj[i][0];
            // int v = adj[i][1];
            // m[u].push_back(v);
            // m[v].push_back(u);
             m[i] = list<int>(adj[i].begin(), adj[i].end());
        }
        
        if(!m.empty()) {
            solve(0, m, vis, ans); 
        }
        return ans;
    }
};