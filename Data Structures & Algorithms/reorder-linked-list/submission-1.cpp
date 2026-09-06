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
        
        ListNode* tmp = head;
        vector<ListNode* > store;

        while (tmp != nullptr) {
            store.push_back(tmp);
            tmp = tmp->next;
        }

        int size = static_cast<int>(store.size());

        int left = 1;
        int right = size - 1;

        int count = 1;

        tmp = head;

        cout << "van" << endl;

        while (left <= right) {
            if (count % 2 != 0) {
                tmp->next = store[right];
                right--;
            }
            else {
                tmp->next = store[left];
                left++;
            }

            tmp = tmp->next;
            count++;      
            cout << count << endl;
        }

        tmp->next = nullptr;
    }
};



























