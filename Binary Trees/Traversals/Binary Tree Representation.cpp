
// } Driver Code Ends
//User function Template for C++

/*struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}*/

class Solution{
public:

    void create_tree(node* root0, vector<int> &vec){
        //Your code goes here
        root0->data=vec[0];
        node* root1=newNode(vec[1]);
        node* root2=newNode(vec[2]);
        node* root3=newNode(vec[3]);
        node* root4=newNode(vec[4]);
        node* root5=newNode(vec[5]);
        node* root6=newNode(vec[6]);
        root0->left=root1;
        root0->right=root2;
        root1->left=root3;
        root1->right=root4;
        root2->left=root5;
        root2->right=root6;
        
    }


};