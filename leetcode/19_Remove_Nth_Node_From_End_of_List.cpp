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
//     void removeNode(ListNode *&head,int n,int count)
//     {
//         if(count == n)
//         {
//             ListNode *deletenode = head;
//             head = head->next;
//             delete deletenode;
//             return; 
//         }
//         ListNode *temp = head;
//         int i = count - n - 1;
//         while(i > 0)
//         {
//             i--;
//             temp = temp->next;
//         }
//         ListNode *deletenode = temp->next;
//         temp->next = temp->next->next;
//         delete deletenode;
//     }
//     int lengthCount(ListNode *temp)
//     {
//         int count = 0;
//         while(temp != NULL)
//         {
//             count++;
//             temp = temp->next;
//         }
//         return count;
//     }
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int count = lengthCount(head);
//         if(count == 1)
//         {
//             delete head;
//             return NULL;
//         }
//         removeNode(head,n,count);
//         return head;
//     }
// };