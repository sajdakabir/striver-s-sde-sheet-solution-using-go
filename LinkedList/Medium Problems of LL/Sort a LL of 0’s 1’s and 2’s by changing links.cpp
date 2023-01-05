// https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=given-a-linked-list-of-0s-1s-and-2s-sort-it


//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    
    Node* Mid(Node* head){
        Node* s=head;
        Node* f=head;
        while(f!=NULL && f->next==NULL){
            
            s=s->next;
            f=f->next->next;
        }
        return s;
    }
    
    Node* merge(Node* l1, Node* l2){
  
        
         if(l1==NULL)return l2;
        if(l2==NULL)return l1;

        if(l1->data>l2->data)swap(l1,l2);

        Node* res=l1;

        while(l1!=NULL && l2!=NULL){
            Node* temp=NULL;
            while(l1!=NULL && l1->data<=l2->data){
                temp=l1;
                l1=l1->next;
            }
            temp->next=l2;
            swap(l1,l2);
        }
        return res;
    }
    
    
    
    
    Node* segregate(Node *head) {
        
        // Add code here
           if(head==NULL || head->next==NULL) return head;
        Node* mid=Mid(head);
        Node* newHead=mid->next;
        mid->next=NULL;
        return merge(segregate(head),segregate(newHead));
      
    }
};


// the the 0,1,2  and replace the data   ---->method 1

// make 2 list zero ,one and two and add it ---?method 2

// using merger short