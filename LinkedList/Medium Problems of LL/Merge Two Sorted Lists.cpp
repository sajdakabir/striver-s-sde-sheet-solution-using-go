// leetcode link:https://leetcode.com/problems/merge-two-sorted-lists/description/


// in brute froce --->>> create node and join then basically use space O(N1+N1)


// one  optimal way

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)return list2;
        if(list2==NULL)return list1;
        ListNode* head;
        if(list1->val<list2->val){
          head=list1;
          list1=list1->next;
        }else{
             head=list2;
          list2=list2->next;
        }
        // ListNode* head=list1;
        ListNode* cur=head;
        while(list1!=NULL  && list2!=NULL){
           if(list1->val<=list2->val){

           cur->next=list1;
           list1=list1->next;
        }else{
          cur->next=list2;
           list2=list2->next  ;
        }
        cur=cur->next;
        }

        if(list1!=NULL)cur->next=list1;
        if(list2!=NULL)cur->next=list2;
        return head;
    }
};


// second optimal 


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1==NULL)return list2;
        if(list2==NULL)return list1;

        if(list1->val>list2->val)swap(list1,list2);
        ListNode* res=list1;
        while(list1!=NULL && list2!=NULL){
            ListNode* temp=NULL;
            while(list1!=NULL && list1->val<=list2->val){
                temp=list1;
                list1=list1->next;
            }
            temp->next=list2;
            swap(list1,list2);
         
        }
        return res;
    }
};