// class Solution {
//     // Helper function to check if the linked list matches a downward path in the tree
//     bool dfs(ListNode* head, TreeNode* root) {
//         // If we reached the end of the linked list, we found a valid path!
//         if (head == nullptr) {
//             return true; 
//         }
//         // If the tree path ends but the list is not finished, it's not a match.
//         if (root == nullptr) {
//             return false; 
//         }
        
//         // If the values don't match, it's not a valid path from this point.
//         if (head->val != root->val) {
//             return false;
//         }
        
//         // The current values match, now check the left and right children
//         // We only need ONE of the paths to match, so we use OR (||)
//         return dfs(head->next, root->left) || dfs(head->next, root->right);
//     }

// public:
//     bool isSubPath(ListNode* head, TreeNode* root) {
//         // If the tree is empty, there's no path
//         if (root == nullptr) {
//             return false;
//         }
        
//         // Option 1: The path starts at the current root node
//         if (dfs(head, root)) {
//             return true;
//         }
        
//         // Option 2: The path starts somewhere in the left or right subtree
//         return isSubPath(head, root->left) || isSubPath(head, root->right);
//     }
// };