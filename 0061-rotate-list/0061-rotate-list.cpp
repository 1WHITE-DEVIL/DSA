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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || head -> next == nullptr || k == 0) return head;

        ListNode* temp = head;
        int n = 1;
        while(temp->next){
            temp = temp ->next;
            n++;
        }
        k = k % n;
        temp -> next = head;
        int steps = n - k-1;
        ListNode* tail = head;
        while(steps--){
            tail = tail->next;
        }
        ListNode* newHead = tail->next;
        tail->next = nullptr;
        return newHead; 
    }
};