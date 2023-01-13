class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int s=q.size();
            vector<int>temp;

            while(s--){
                
                TreeNode* node=q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left!=NULL)q.push(node->left);
                if(node->right!=NULL)q.push(node->right);

            }
            ans.push_back(temp);
        }
        return ans;
    }
};