// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {
//         if(!head || !head->next) 
//         {
//             return head;
//         }
//         ListNode *first = head;
//         ListNode *second = head->next;
//         first->next = swapPairs(second->next);
//         second->next = first;
//         return second;
//     }
// };


















// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {
//         if(!head || !head->next) 
//         {
//             return head;
//         }
//         vector<ListNode *>node;
//         ListNode* temp = head;
//         while(temp != NULL)
//         {
//             node.push_back(temp);
//             temp = temp->next;
//         }
//         for(int i = 0; i < node.size()-1; i += 2)
//         {
//             swap(node[i],node[i+1]);
//         }
//          for(int i = 0; i < node.size()-1; i++)
//         {
//             node[i]->next = node[i+1];
//         }
//         node[node.size()-1]->next = NULL;
//         return node.empty() ? NULL : node[0];
//     }
// };