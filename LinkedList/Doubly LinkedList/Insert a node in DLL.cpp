// Problem link:https://practice.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insert-a-node-in-doubly-linked-list


void addNode(Node *head, int pos, int data)
{
   // Your code here
   
   Node* x=new Node(data);
   Node* temp=head;
   while(pos--)temp=temp->next;
   
   x->next=temp->next;
   x->prev=temp;
   if(temp->next!=NULL)temp->next->prev=x;
   temp->next=x;
}