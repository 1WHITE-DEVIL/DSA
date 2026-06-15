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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(!head ) return head;
        if(!head->next) return nullptr;
        while(fast && fast->next){
            fast = fast ->next->next;
            slow = slow->next;
        }
        ListNode* temp = head;
        while(temp ->next != slow){
            temp = temp->next;
        }
        temp->next = slow->next;
        return head;
    }
};