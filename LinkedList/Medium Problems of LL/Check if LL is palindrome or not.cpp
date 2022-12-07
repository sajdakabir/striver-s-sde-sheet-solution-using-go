// leetcode link:https://leetcode.com/problems/palindrome-linked-list/description/


class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(head!=NULL){
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head==NULL && head->next==NULL)return true;

        ListNode* s=head;
        ListNode* f=head;

        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        s->next=reverse(s->next);
        s=s->next;
        while(s!=NULL){
            if(head->val!=s->val)return false;
            s=s->next;
            head=head->next;
        }
        return true;
    }
};