#include<iostream>
#include<vector>
#include<string>
using namespace std;

// class Solution {
    
//     bool safe(int newx,int newy,vector<vector<bool>>&vis,
//     vector<vector<int>>&maze,int n)
//      {
//         if((newx >= 0 && newx < n) && (newy >= 0 && newy < n) && (vis[newx][newy] != 1 && maze[newx][newy] == 1))
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//      }    
//     void solve(int x,int y ,vector<vector<int>>&maze,int n,
//     vector<vector<bool>>&vis,vector<string>&ans,string path)
//     {
//         if(x == n - 1 && y == n-1)
//         {
//             ans.push_back(path);
//             return;
//         }
        
//         vis[x][y] = 1;
//         // D
//         if(safe(x+1,y,vis,maze,n))
//         {
//             solve(x+1,y,maze,n,vis,ans,path + "D");
//         }
//         // L
//         if(safe(x,y-1,vis,maze,n))
//         {
//             solve(x,y-1,maze,n,vis,ans,path + "L");
//         }
//         // R
//         if(safe(x,y+1,vis,maze,n))
//         {
//             solve(x,y+1,maze,n,vis,ans,path + "R");
//         }
//         // U
//         if(safe(x-1,y,vis,maze,n))
//         {
//             solve(x-1,y,maze,n,vis,ans,path + "U");
//         }
//         vis[x][y] = 0;
//     }
//   public:
//     vector<string> ratInMaze(vector<vector<int>>& maze) {
//         // code here
//         int r = maze.size();
//         vector<string>ans;
//         vector<vector<bool>> vis(r,vector<bool>(r,0));
//         string path ="";
//         if(maze [0][0] == 0)
//         {
//             return ans;
//         }
//         solve(0,0,maze,r,vis,ans,path);
//         return ans;
//     }
// };

int main(){
    string p;
    p = p + "r";
    p.push_back('a');
    for(int i = 0; p[i] != '\0'; i++)
    {
        cout <<"word are : " << p[i];
    }
}