// leetcode link:https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/




class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start=new ListNode();
        start->next=head;
        ListNode* s=start;
        ListNode* f=start;

        for(int i=1;i<=n;i++){
            f=f->next;
        }

        while(f->next!=NULL){
           
            f=f->next;
             s=s->next;
        }
        // ListNode* temp=s->next;
        s->next=s->next->next;
        // delete(temp);
        return start->next;
    }
};