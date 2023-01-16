class Solution {
public:
void revPre(TreeNode* root, int level,vector<int>&ans){
    if(root==NULL)return ;

    if(level==ans.size())ans.push_back(root->val);
    
    revPre(root->right,level+1,ans);
    revPre(root->left,level+1,ans);
}
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;

        revPre(root,0,ans);
        return ans;
        
    }
};