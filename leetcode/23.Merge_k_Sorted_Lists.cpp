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
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//        if(lists.size() == 0)
//        {
//         return NULL;
//        }
//        vector<ListNode *>temp;
//        for(int i = 0; i < lists.size();i++)
//        {
//         ListNode *curr = lists[i];
//         while(curr)
//         {
//             temp.push_back(curr);
//             curr = curr->next;
//         }
//        }
//         if(temp.empty())
//         {
//             return NULL;
//         }
//        sort(temp.begin(), temp.end(), [](ListNode* a, ListNode* b)
//         {
//             return a->val < b->val;
//         });
//        for(int i = 0; i < temp.size()-1; i++)
//        {
//         temp[i]->next = temp[i+1];
//        }
//        temp[temp.size() - 1]->next = NULL;
//        return temp[0];
//     }
// };