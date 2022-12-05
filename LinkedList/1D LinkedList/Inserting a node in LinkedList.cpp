// problem Link:https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=linked-list-insertion


class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node * NewNode=new Node(x);
       NewNode->next=head;
       return NewNode;
       
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
        
        if(head==NULL){
            Node* cur=new Node(x);
            return cur;
        }
        
        Node* cur=head;
        while(cur->next!=NULL){
            cur=cur->next;
        }
        cur->next=new Node(x);
        return head;
    }
};
