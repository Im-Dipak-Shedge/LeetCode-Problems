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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head==nullptr || head->next==nullptr) return head;
      ListNode* temp = head;
    ListNode* i = head->next;
    while (temp != nullptr) {
    if(temp->val==i->val){
        temp->next=i->next;
        if(i->next != nullptr) i= i->next;
        else break;
       
    }else{
        temp = temp->next;
    }
    }

    return head; 
    }
};