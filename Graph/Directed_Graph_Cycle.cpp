// #include<iostream>
// #include<list>
// #include<vector>
// #include<unordered_map>
// #include<queue>
// using namespace std;


// class Solution {
//     bool solve(int node,unordered_map<int,bool>&vis,
//     unordered_map<int,bool>&dftvis,unordered_map<int,list<int>>&m)
//     {
//         vis[node] = true;
//         dftvis[node] = true;
//         for(int neighbour : m[node])
//         {
//             if(!vis[neighbour])
//             {
//                 int check = solve(neighbour,vis,dftvis,m);
//                 if(check)
//                 {
//                     return true;
//                 }
//             }
//             else if(dftvis[neighbour])
//             {
//                 return true;
//             }
//         }
//         dftvis[node] = false;
//         return false;
//     }
//   public:
//     bool isCyclic(int V, vector<vector<int>> &edges) {
//         // code here
//         unordered_map<int,list<int>>m;
//         for(int i = 0; i < edges.size();i++)
//         {
//             int u = edges[i][0];
//             int v = edges[i][1];
//             m[u].push_back(v);
//         }
        
//         unordered_map<int,bool>vis;
//         unordered_map<int,bool>dftvis;
        
//         for(int i = 0; i < V; i++)
//         {
//             if(!vis[i])
//             {
//                 bool check = solve(i,vis,dftvis,m);
//                 if(check)
//                 {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };
















// #include<iostream>
// #include<map>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool cmp(pair<int,int> &a, pair<int,int> &b)
// {
//     return a.second > b.second;
// }
// void solve(int *arr, int n)
// {
//     map<int, int> mp;

//     for (int i = 0; i < n; i++)
//     {
//         mp[arr[i]]++;
//     }

//     vector<pair<int, int>> v;
//     for (auto it : mp)
//     {
//         v.push_back({it.first, it.second});
//     }
//      sort(v.begin(), v.end(), cmp);
//     cout << endl << "Sorted Output by highest frequency : ";
//     for (auto it : v)
//     {
//         int num = it.first;
//         int freq = it.second;
//         while (freq--)
//         {
//             cout << num << " ";
//         }
//     }
// }

// int main()
// {
//     int arr[100];
//     int n;

//     cout << "enter the size of the array :- ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cout << "enter the " << i << " index number value :- ";
//         cin >> arr[i];
//     }

//     solve(arr, n);
// }





#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string minWindow(string s, string t)
{
    unordered_map<char, int> mp;

    for (char c : t)
    {
        mp[c]++;
    }

    int required = mp.size();  
    int i = 0, j = 0;
    int formed = 0;
    unordered_map<char, int> window;
    int minLen = INT16_MAX;
    int start = 0;

    while (j < s.size())
    {
        char c = s[j];
        window[c]++;

        if (mp.count(c) && window[c] == mp[c])
            formed++;

        while (i <= j && formed == required)
        {
            if (j - i + 1 < minLen)
            {
                minLen = j - i + 1;
                start = i;
            }

            char leftChar = s[i];
            window[leftChar]--;

            if (mp.count(leftChar) && window[leftChar] < mp[leftChar])
                formed--;

            i++;
        }
        j++;
    }

    return (minLen == INT16_MAX) ? "" : s.substr(start, minLen);
}

int main()
{
    string S;
    string T;
cout << "enter the string S :- ";
cin >> S;
cout << "enter the string T :- ";
cin >> T;

    cout << minWindow(S, T) << endl;
    return 0;
}



