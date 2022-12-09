// leetcode link:https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/


class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)return NULL;
        ListNode* f=head;
        ListNode* s=head;
         ListNode* prev=head;
        while(f && f->next){
            prev=s;
            s=s->next;
            f=f->next->next;
        }
        prev->next=s->next;
       
        return head;
    }
};