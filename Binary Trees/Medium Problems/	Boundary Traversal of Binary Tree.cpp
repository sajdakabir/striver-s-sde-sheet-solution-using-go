class Solution {
public:

 bool isLeaf(Node* root){
     return !root->left && ! root->right;
 }

void addLeftPart(Node* root, vector<int>&ans){
    Node* cur=root->left;
    while(cur){
    if(!isLeaf(cur))ans.push_back(cur->data);
    
    if(cur->left)cur=cur->left;
    else cur=cur->right;
    }
}
void addLeaves(Node* root,vector<int>&ans){
    if(isLeaf(root))ans.push_back(root->data);
    if(root->left)addLeaves(root->left,ans);
    if(root->right)addLeaves(root->right,ans);
}

void addRightinRevereOrder(Node* root, vector<int>&ans){
    Node* cur=root->right;
    vector<int>temp;
    while(cur){
        if(!isLeaf(cur))temp.push_back(cur->data);
        if(cur->right)cur=cur->right;
        else cur=cur->left;
    }
    for(int i=temp.size()-1;i>=0;i--){
        ans.push_back(temp[i]);
    }
}

    vector <int> boundary(Node *root)
    {
        vector<int>ans;
        if(!isLeaf(root))ans.push_back(root->data);
        addLeftPart(root,ans);
        addLeaves(root,ans);
        addRightinRevereOrder(root,ans);
        return ans;
    }
};