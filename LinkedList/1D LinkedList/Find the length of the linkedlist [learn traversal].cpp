// problem link:https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=count-nodes-of-linked-list

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        Node* cur=head;
        int ans=0;
        while(cur!=NULL){
            ans++;
            cur=cur->next;
        }
    return ans;
    }
};
    
