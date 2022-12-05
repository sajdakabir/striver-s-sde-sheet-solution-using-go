// https://leetcode.com/problems/delete-node-in-a-linked-list/

// gfg link:https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=delete-a-node-in-single-linked-list

// Leetcode Solution:
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};


// gfg sloution

Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(head==NULL)return head;
    if(x==1)return head->next;
    
    Node* cur=head;
    for(int i=1;i<x-1;i++){
        cur=cur->next;
    }
    cur->next=cur->next->next;
    return head;
}