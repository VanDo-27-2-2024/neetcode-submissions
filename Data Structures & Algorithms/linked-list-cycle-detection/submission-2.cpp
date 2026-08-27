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

        unordered_set<ListNode* > test;

        if (head->next == nullptr || head == nullptr) {
            return false;
        }

        ListNode* tmp = head->next;

        while (tmp != nullptr) {

            // tmp = head;

            if (test.find(tmp) != test.end()) {
                return true;
            }

            test.insert(tmp);
            tmp = tmp->next;
        }

        return false;
    }
};










