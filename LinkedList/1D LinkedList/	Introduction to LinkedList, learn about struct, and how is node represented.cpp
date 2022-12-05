// problem link:https://practice.geeksforgeeks.org/problems/introduction-to-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=introduction-to-linked-list

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node * head=NULL;
        Node * temp=new Node(arr[0]);
        head=temp;
        for(int i=1;i<arr.size();i++)
        {
            temp->next=new Node(arr[i]);
            temp=temp->next;
        }
        return head;
    }
};