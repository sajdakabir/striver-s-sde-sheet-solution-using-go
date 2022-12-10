// leetcode link:https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/



class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* s=head;
        ListNode* f=head;

        for(int i=1;i<k;i++){
            f=f->next;
        }
        ListNode* fstNode=f;

        while( f->next){
            s=s->next;
            f=f->next;
        }
       
        swap(fstNode->val,s->val);
        return head;
    }
};