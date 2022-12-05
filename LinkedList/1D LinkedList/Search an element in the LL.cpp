// problem link:https://practice.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=search-in-linked-list-1664434326


class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
        Node* cur=head;
       for(int i=0;i<n;i++){
           if(cur->data==key)return true;
           cur=cur->next;
       }
       return false;
    }
};