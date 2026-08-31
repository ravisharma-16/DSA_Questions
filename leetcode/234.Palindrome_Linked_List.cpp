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
//      ListNode *mid( ListNode *&head)
// {
//     ListNode *slow = head;
//     ListNode *fast = head->next;
//     while(fast != NULL && fast->next != NULL)
//     {
//         fast = fast ->next->next;
//         slow = slow->next;
//     }
//     return slow;
// }
//      ListNode *reverse( ListNode *&head)
// {
//     ListNode *prev = NULL;
//     ListNode *current = head;
//     ListNode *next;
//     while (current != NULL)
//     {
//         next = current->next;
//         current->next = prev;
//         prev = current;
//         current = next;
//     }
//     return prev;
// }
// public:
//     bool isPalindrome(ListNode* head) {
//     if(head->next == NULL)
//     {
//         return true;
//     }
//     ListNode *middlenum = mid(head);
//     ListNode *temp = middlenum->next;
//     middlenum->next = reverse(temp);
//     ListNode *temp1 = head;
//     ListNode *temp2 = middlenum->next;
//     while(temp2 != NULL)
//     {
//         if(temp1->val != temp2->val)
//         {
//             return false;
//         }
//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }
//     return true;
//     }
// };