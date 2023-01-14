class Solution {
public:

    int f(TreeNode* root,int &dia){
        if(root==NULL)return 0;
        int l=f(root->left,dia);
        int r=f(root->right,dia);
        dia=max(dia,l+r);

        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {

        int dia=0;
        f(root,dia);
        return dia;
        
    }
};