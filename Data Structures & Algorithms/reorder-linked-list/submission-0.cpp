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
        
        vector<ListNode* > tmp;

        ListNode* cur = head;

        while(cur != nullptr) {
            tmp.push_back(cur);
            cur = cur->next;
        }

        int left = 1;
        int right = tmp.size() - 1;
        int count = 1;

        cur = head;
        while (left <= right) {   
            if (count % 2 != 0) {
                cur->next = tmp[right];
                right--;    
            }
            else {
                cur->next = tmp[left];
                left++;
            }

            cur = cur->next;
            count++;
        }

        cur->next = nullptr;

    }
};




















