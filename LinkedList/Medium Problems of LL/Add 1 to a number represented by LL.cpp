
// https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=add-1-to-a-number-represented-as-linked-list



class Solution
{
    public:
    
    Node* reverse(Node* head){
        Node* prev=NULL;
        Node* next=NULL;
        
 
        while(head!=NULL){
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    
    Node* addOne(Node *head) 
    {
       head= reverse(head);
        
        Node* cur=head;
        Node* prev=head;
        
        int sum=cur->data+1;
        cur->data=sum%10;
        int carry=sum/10;
        cur=cur->next;
        
        while(cur!=NULL){
        sum=cur->data+carry;
        cur->data=sum%10;
        carry=sum/10;
        prev=cur;
        cur=cur->next;
        }
        
        if(carry!=0){
            prev->next=new Node(carry);
        }
        head=reverse(head);
        return head;
        
    }
};