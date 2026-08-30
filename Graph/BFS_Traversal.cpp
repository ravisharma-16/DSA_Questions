#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

class Solution {
    void create(vector<vector<int>> &adj, unordered_map<int, list<int>>& m) {
        int n = adj.size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(adj[i][j] == 1) {
                    m[i].push_back(j);
                }
            }
        }
    }
    
public:
    vector<int> bfs(vector<vector<int>> &adj) {
        unordered_map<int, list<int>> m;
        create(adj, m);
        unordered_map<int, bool> vis;
        vector<int> ans;
        queue<int> q;
        
        q.push(0);
        vis[0] = true;
        
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            for(auto i : m[node]) {  
                if(!vis[i]) {
                    q.push(i);
                    vis[i] = true;
                }
            }
        }
        return ans;
    }
};


// samajna kya lea hai


// #include <iostream>
// #include <unordered_map>
// #include <list>
// #include <vector>
// using namespace std;

// int main() {
//     vector<vector<int>> adj = {
//         {0, 1, 1, 0},
//         {1, 0, 1, 0},
//         {1, 1, 0, 1},
//         {0, 0, 1, 0}
//     };
    
//     unordered_map<int, list<int>> m;
    
//     for(int i = 0; i < adj.size(); i++) {
//         for(int j = 0; j < adj[i].size(); j++) {
//             if(adj[i][j] == 1) {
//                 cout << "Adding edge: " << i << " -> " << j << endl;
//                 m[i].push_back(j);
                
//                 // Print current state of m
//                 cout << "Current adjacency list:" << endl;
//                 for(auto& pair : m) {
//                     cout << "Vertex " << pair.first << ": [";
//                     for(int neighbor : pair.second) {
//                         cout << neighbor << " ";
//                     }
//                     cout << "]" << endl;
//                 }
//                 cout << "-------------------" << endl;
//             }
//         }
//     }
    
//     return 0;
// }