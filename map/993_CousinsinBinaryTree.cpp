// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     bool isCousins(TreeNode* root, int x, int y) {
//         unordered_map<int,pair<TreeNode *,int>>map;
//         queue<TreeNode *>q;
//         q.push(root);
//         int level = 0;
//         while(!q.empty())
//         {
//             level++;
//             int size = q.size();
//             for(int i = 0;i < size; i++)
//             {
//             TreeNode *temp = q.front();
//             q.pop();
//                 if(temp->left)
//                 {
//                     q.push(temp->left);
//                     map[temp->left->val] = {temp,level};
//                 }
//                 if(temp->right)
//                 {
//                     q.push(temp->right);
//                     map[temp->right->val] = {temp,level};
//                 }
//             }
//         }
//         // cout<<map[x].first << "   " << map[x].second;
//         if(map[x].first!=map[y].first && map[x].second==map[y].second){
//         return true;
//       }
//         return false;
//     }
// };


//  ******************************************************************


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
//     int headRoot,AnotherheadRoot,DepthX,DepthY;
//     void solve(TreeNode *root,int x,int y,int RunningRoot,int depth)
//     {
//        if(!root)
//         {
//             return;
//         }
//         if(root->val == x)
//         {
//             headRoot = RunningRoot;
//             DepthX = depth;
//         }
//         if(root->val == y)
//         {
//             AnotherheadRoot = RunningRoot;
//             DepthY = depth;
//         }
//         solve(root->left,x,y,root->val,depth+1);
//         solve(root->right,x,y,root->val,depth+1);
//     }
// public:
//     bool isCousins(TreeNode* root, int x, int y) {
//         headRoot = AnotherheadRoot = DepthX = DepthY = -1;
//         solve(root,x,y,-1,0);
//         cout << headRoot << " " << AnotherheadRoot << " " << DepthX << " " << DepthY << " ";
//         return headRoot != AnotherheadRoot && DepthX == DepthY ? true : false;
//     }
// };