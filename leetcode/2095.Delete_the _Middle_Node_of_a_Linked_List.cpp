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
//     // void printnode(ListNode *&head)
//     // {
//     //     ListNode *temp = head;
//     //     while(!temp)
//     //     {
//     //         cout << temp->val << " ";
//     //         temp = temp->next;
//     //     }
//     // }
//     void deleteNode(int mid,ListNode *&head)
//     {
//         if(mid == 1)
//         {
//             ListNode* temp = head;
//             head = head->next;
//             delete temp;
//             return;
//         }
//         int count = 1;
//         ListNode *prev = NULL;
//         ListNode *curr = head;
//         while(curr != NULL && count <= mid)
//         {
//             if(count == mid)
//             {
//                 prev->next = curr->next;
//                 delete curr;
//                 return;
//             }
//             prev = curr;
//             curr = curr->next;
//             count++;
//         }
//     }
//     int Findsize(ListNode *&head)
//     {
//         int len = 0;
//         ListNode *temp = head;
//         while(temp != NULL)
//         {
//             len++;
//             temp = temp->next;
//         }
//         return len;
//     }
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         if(head == NULL || head->next == NULL) 
//         {
//             return NULL;
//         }
//        int len = Findsize(head); 
//        int mid = (len / 2) + 1;
//        deleteNode(mid,head);
//     //    printnode(head);
//        return head;
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
//     // void printnode(ListNode *&head)
//     // {
//     //     ListNode *temp = head;
//     //     while(!temp)
//     //     {
//     //         cout << temp->val << " ";
//     //         temp = temp->next;
//     //     }
//     // }
//     int Findsize(ListNode *&head)
//     {
//         int len = 0;
//         ListNode *temp = head;
//         while(temp != NULL)
//         {
//             len++;
//             temp = temp->next;
//         }
//         return len;
//     }
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         if(head == NULL || head->next == NULL) 
//         {
//             return NULL;
//         }
//        int len = Findsize(head); 
//        int mid = (len / 2);
//         ListNode* curr = head;
//         for (int i = 0; i < mid - 1; i++) {
//             curr = curr->next;
//         }
//         ListNode *temp = curr->next;
//         curr->next = temp->next;
//         delete temp;

//     //    printnode(head);
//        return head;
//     }
// };