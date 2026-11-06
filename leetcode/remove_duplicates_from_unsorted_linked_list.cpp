
// // remove duplicates from unsorted linked list


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
// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(!head)
//         {
//             return NULL;
//         }
//         if(!head->next)
//         {
//             return head;
//         }
//         ListNode *curr = head;
//         while(curr)
//         {
//             ListNode *temp = curr->next;
//             while(temp)
//             {
//             if(curr->val != temp->val)
//             {
//                 temp = temp->next;
//             }
//             else
//             {
//                 ListNode *deleteNode = temp->next;
//                 temp->next = temp->next->next;
//                 delete(deleteNode);
//             }
//         }
//         curr = curr->next;
//         }
//         return head;
//     }
// };








// remove duplicates from unsorted linked list


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// #include<iostream>
// #include<map>
// using namespace std;

// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(!head)
//         {
//             return NULL;
//         }
//         if(!head->next)
//         {
//             return head;
//         }
//         ListNode *curr = head;
//         map<int,bool>seen;
//         seen[head->val] = true;
//         while(curr && curr->next)  
//         {
//             if(seen[curr->next->val])   // seen.find(curr->next->val) != seen.end()
//             {
//                 ListNode *deleteNode = curr->next;
//                 curr->next = curr->next->next;
//                 delete deleteNode;
//             }
//             else
//             {
//              seen[curr->next->val] = true;
//              curr = curr->next;  
//             }
//         }
//         return head;
//     }
// };