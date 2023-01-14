class Solution {
public:

int f(TreeNode* root, int &maxi){
    if(root==NULL)return 0;
    int maxL=max(0,f(root->left,maxi));
    int maxR=max(0,f(root->right,maxi));

    maxi=max(maxi,maxL+maxR+root->val);
    return root->val+max(maxL,maxR);
}

    int maxPathSum(TreeNode* root) {

        int maxi=INT_MIN;
        f(root,maxi);
        return maxi;
        
    }
};