// leetcode link:https://leetcode.com/problems/odd-even-linked-list/description/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* even_start=head->next;

        while(odd->next!=NULL && even->next!=NULL){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=even_start;
        return head;
    }
};