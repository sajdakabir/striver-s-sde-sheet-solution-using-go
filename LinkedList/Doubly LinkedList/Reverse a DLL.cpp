// problem link:https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=reverse-a-doubly-linked-list


Node* reverseDLL(Node * head)
{
    //Your code here
    Node* cur=head;
    while(cur!=NULL){
        Node* temp=cur->next;
        cur->next=cur->prev;
        cur->prev=temp;
        if(cur->prev==NULL){
            head=cur;
        }
        cur=cur->prev;
    }
    return head;
}
