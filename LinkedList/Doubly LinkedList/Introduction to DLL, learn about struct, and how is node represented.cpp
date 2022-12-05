// problem link:https://practice.geeksforgeeks.org/problems/introduction-to-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=introduction-to-doubly-linked-list


class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node* head;
        Node* temp=new Node(arr[0]);
        head=temp;
        for(int i=1;i<arr.size();i++){
            Node* p=new Node(arr[i]);
            temp->next=p;
            p->prev=temp;
            temp=p;
            
        }
        return head;
    }
};