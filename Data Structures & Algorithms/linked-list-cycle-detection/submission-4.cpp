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
    bool hasCycle(ListNode* head) {

        if (head == nullptr) {
            return false;
        }

        ListNode* p1 = head;
        ListNode* p2 = head->next;

        ListNode* tmp;
        while (p1 != nullptr || p2 != nullptr) {
            for (int i = 0; i < 2; i++) {
                if (p2 == nullptr) {
                    return false;
                }
                else if (p2 == p1) {
                    return true;
                }
                p2 = p2->next;
            }

            p1 = p1->next;    
        }

        return false;
    }
};










