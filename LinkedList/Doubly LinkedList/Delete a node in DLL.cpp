// problem libk:https://practice.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=delete-node-in-doubly-linked-list


class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      
      Node* temp=head_ref;
    //   Deleteing from begining
    
    if(x==1){
        head_ref=temp->next;
        head_ref->prev=NULL;
        delete(temp);
    }
    // 
    else{
        for(int i=0;i<x-1;i++){
            temp=temp->next;
        }
        // deleting from the end
        
        if(temp->next==NULL){
            temp->prev->next=NULL;
            delete(temp);
        }
        
        // deleting from any point between
        
        else{
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            delete(temp);
        }
    }
    return head_ref;
    
    }
};