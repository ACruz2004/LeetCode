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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *place = new ListNode(0);
        ListNode* current = place;
        bool carry = false;

        while (l1 != nullptr || l2 != nullptr) {
            int x = 0;
            int y = 0;

            if (l1 != nullptr) {
                x = l1->val;
            }

            if (l2 != nullptr) {
                y = l2->val;
            }

            int sum = x + y;

            if (carry == true) {
                sum = sum + 1;
            }
            if (sum >= 10) {
                carry = true;
                sum = sum - 10;
            } else {
                carry = false;
            }

            current->next = new ListNode(sum % 10);
            current = current->next;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        if (carry == true) {
            current->next = new ListNode(1);
        }

        ListNode* sums = place->next;
        delete place;
        return sums;
    }
};