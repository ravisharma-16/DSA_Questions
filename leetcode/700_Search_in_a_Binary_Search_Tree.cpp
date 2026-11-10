// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//        if(!root)
//        {
//         return NULL;
//        }
//         if(root->val == val)
//         {
//             return root;
//         }
//         if (val < root->val)
//         {
//             return searchBST(root->left,val);
//         }
//         else
//         {
//             return searchBST(root->right,val);
//         }
//         return NULL;
//     }
// };





// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//        TreeNode *temp = root;
//        while(temp != NULL)
//        {
//         if(temp->val == val)
//         {
//             return temp;
//         }
//         if (val < temp->val)
//         {
//             temp = temp->left;
//         }
//         else
//         {
//             temp = temp->right;
//         }
//         }
//     return temp;
//     }
// };

