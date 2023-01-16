void Pre(Node* root, int level,vector<int>&ans){
    if(root==NULL)return ;

    if(level==ans.size())ans.push_back(root->data);
     Pre(root->left,level+1,ans);
    Pre(root->right,level+1,ans);
 
}
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
    vector<int>ans;

        Pre(root,0,ans);
        return ans;
}
