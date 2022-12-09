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



// link:https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=segregate-even-and-odd-nodes-in-a-linked-list


class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        // if(head==NULL || head->next==NULL)return head;
        
        Node* oddStart=NULL;
        Node* evenStart=NULL;
        Node* odd=NULL;
        Node* even=NULL;
        while(head){
            if(head->data%2==0){
                if(evenStart==NULL){
                    evenStart=head;
                    even=head;
                }else{
                    even->next=head;
                    even=even->next;
                }
            }else{
                if(oddStart==NULL){
                    oddStart=head;
                    odd=head;
                }else{
                    odd->next=head;
                    odd=odd->next;
                }
            }
            head=head->next;
        }
        
        if(even!=NULL)even->next=oddStart;
        if(odd)odd->next=NULL;
        if(evenStart)return evenStart;
        return oddStart;
        
    }
};