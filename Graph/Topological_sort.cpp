#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
#include<queue>
#include<stack>
using namespace std;


class Solution {
    void solve(int node,unordered_map<int,bool>&vis,
    unordered_map<int,list<int>>&arr,stack<int>&st)
    {
        vis[node] = true;
        for(auto child : arr[node])
        {
            if(!vis[child])
            {
            solve(child,vis,arr,st);
            }
        }
        st.push(node);
    }
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        unordered_map<int,bool>vis;
        unordered_map<int,list<int>>adj;
        for(int i=0; i < edges.size(); i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
        }
        vector<int>ans;
        stack<int>st;
        for(int i = 0; i < V; i++)
        {
            if(!vis[i])
            {
                solve(i,vis,adj,st);
            }
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};