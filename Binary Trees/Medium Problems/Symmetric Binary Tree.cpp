class Solution {
public:
bool match(TreeNode* r1, TreeNode* r2){
    if(r1==NULL && r2==NULL)return true;
       else if(r1!=NULL && r2!=NULL){
    
         bool a= match(r1->left,r2->right);
           bool b= match(r1->right,r2->left);
         if(r1->val==r2->val && a && b)return true;

    else return false;
       }else return false;
}


    bool isSymmetric(TreeNode* root) {
        if(root==NULL || root->left==NULL && root->right==NULL)return true;
        return match(root->left,root->right);
    }
};