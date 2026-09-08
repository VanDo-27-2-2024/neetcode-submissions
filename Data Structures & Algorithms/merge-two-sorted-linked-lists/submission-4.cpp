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

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tmp = &dummy;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tmp->next = list1;
                list1 = list1->next;
            }
            else {
                tmp->next = list2;
                list2 = list2->next;
            }

            tmp = tmp->next;
        }

        // ListNode* store;
        // if (list1 != nullptr) {
        //     store = list1;
        // }
        // else {
        //     store = list2;
        // }

        // tmp->next = store;

        tmp->next = (list1 != nullptr) ? list1 : list2;
        return dummy.next;
    }
};
