// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if(!head || !head->next)
//         {
//             return false;
//         }
        
//         while(head) 
//         {
//             if(head->val == INT_MIN) 
//             {
//                 return true;  
//             }
//             head->val = INT_MIN;  
//             head = head->next;        
//         }
//         return false; 
//     }
// };

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if(!head || !head->next)
//         {
//             return false;
//         }
//         unordered_map<ListNode*, bool>mp;
        
//         while(head) 
//         {
//             if(mp[head]) 
//             {
//                 return true;  
//             }
//             mp[head] = true;  
//             head = head->next;        
//         }
//         return false; 
//     }
// };

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         unordered_set<ListNode*>mp;
//         ListNode *temp = head;
//         while(temp)
//         {
//             if(mp.count(temp))
//             {
//                 return true;
//             }
//             mp.insert(temp);
//             temp = temp->next;
//         }
//         return false;
//     }
// };




// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if(!head || !head->next) return false;
        
//         ListNode* slow = head;
//         ListNode* fast = head;
        
//         while(fast && fast->next) {
//             slow = slow->next;        // Move one step
//             fast = fast->next->next;  // Move two steps
            
//             if(slow == fast) {
//                 return true;  // Cycle detected
//             }
//         }
//         return false;  // No cycle
//     }
// };