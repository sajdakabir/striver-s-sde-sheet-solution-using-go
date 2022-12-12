// leetcode link:https://leetcode.com/problems/sort-list/description/




class Solution {
public:

    ListNode* Mid(ListNode* head){
        ListNode* s=head;
        ListNode* f=head;
        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        return s;
    }

    ListNode* mergeList(ListNode* l1, ListNode* l2){
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;

        if(l1->val>l2->val)swap(l1,l2);

        ListNode* res=l1;

        while(l1!=NULL && l2!=NULL){
            ListNode* temp=NULL;
            while(l1!=NULL && l1->val<=l2->val){
                temp=l1;
                l1=l1->next;
            }
            temp->next=l2;
            swap(l1,l2);
        }
        return res;
    }

    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;

        ListNode* mid=Mid(head);
        ListNode* newHead=mid->next;
        mid->next=NULL;

        ListNode* left=sortList(head);
        ListNode* right=sortList(newHead);
        return mergeList(left,right);
    }
};