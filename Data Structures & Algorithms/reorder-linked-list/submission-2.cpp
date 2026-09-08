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
    void reorderList(ListNode* head) {
        
        ListNode* left = head;
        ListNode* right = head;

        // get 2 list 
        while (right->next != nullptr && right->next->next != nullptr) {
            left = left->next;
            right = right->next->next;
        }


        // reverse from mid pos
        ListNode* prev = nullptr;
        ListNode* cur = left;
        ListNode* next = nullptr;

        while (cur != nullptr) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        right = prev;


        // merge two list together 


        ListNode* first = head;
        // bool get_from_second = true;
        while (first != nullptr) {

            ListNode* n1 = first->next;
            ListNode* n2 = right->next;

            first->next = right;
            right->next = n1;

            right = n2;
            first = n1;        
        }
        
    }
};

















