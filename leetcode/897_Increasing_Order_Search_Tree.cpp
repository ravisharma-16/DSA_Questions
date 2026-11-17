// class Solution {
//     void inorder(TreeNode *root,vector<int>&arr)
//     {
//         if(!root)
//         {
//             return;
//         }
//         inorder(root->left,arr);
//         arr.push_back(root->val);
//         inorder(root->right,arr);
//     }
// public:
//     TreeNode* increasingBST(TreeNode* root) {
//         vector<int>arr;
//         inorder(root,arr);
//         TreeNode *root2 = new TreeNode(arr[0]);
//         TreeNode *current = root2;
//         for(int i = 1; i < arr.size(); i++)
//         {
//             current->right = new TreeNode(arr[i]);
//             current = current->right;
//         }
//         root = NULL;
//         return root2;
//     }
// };