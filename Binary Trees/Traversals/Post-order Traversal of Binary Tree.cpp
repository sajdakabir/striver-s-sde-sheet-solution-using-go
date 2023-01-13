class Solution {
public:
void pre(TreeNode* root,vector<int>&ans){
    if(root==NULL)return;
    pre(root->left,ans);
    pre(root->right,ans);
    ans.push_back(root->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        pre(root,ans);
        return ans;
    }
};