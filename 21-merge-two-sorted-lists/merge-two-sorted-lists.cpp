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
        ListNode dummy;                    // This ListNode data type is just there for the end
        ListNode* tail = &dummy;            // This ListNode will be the merged list
        while (list1 != nullptr && list2 != nullptr) { 
            if (list1->val <= list2->val) { // If the value in list one is less than or equal to list2's 
                tail->next = list1;         // Set tail->next to the value in list1
                list1 = list1->next;
            }
            else {
                tail->next = list2;          // Vice versa for if it's not
                list2 = list2->next;
            }
            tail = tail->next;
        }
        if (list1 != nullptr) {
            tail->next = list1;
        }
        else if (list2 != nullptr) {
            tail->next = list2;
        }

        // The merged list is next to dummy so do dummy.next
        return dummy.next;
    }
};