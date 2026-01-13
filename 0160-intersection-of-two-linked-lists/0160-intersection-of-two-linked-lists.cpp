/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* traverseA = headA;
        ListNode* traverseB = headB;
        while (traverseA != traverseB) {
            if (traverseA != nullptr) {
                traverseA = traverseA->next;
            } else {
                traverseA = headB;
            }
            if (traverseB != nullptr) {
                traverseB = traverseB->next;
            } else {
                traverseB = headA;
            }
        }
        return traverseA;
    }
};
