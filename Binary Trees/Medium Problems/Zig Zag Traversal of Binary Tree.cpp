class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
           int falge=true;
        queue<TreeNode* >q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
         
            vector<int>temp;
            while(size--){
                TreeNode* node=q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);

            }
            if(falge==false)reverse(temp.begin(),temp.end());
            falge=!falge;
            ans.push_back(temp);
        }

        return ans;
    }
};