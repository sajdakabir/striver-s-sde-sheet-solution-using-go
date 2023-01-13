void pre(Node* root,vector<int>&ans){
    if(root==NULL)return ;
    ans.push_back(root->data);
    pre(root->left,ans);
    pre(root->right,ans);
}

//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>ans;
  pre(root,ans);
  return ans;
}