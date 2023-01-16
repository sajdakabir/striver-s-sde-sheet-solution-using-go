class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        // {node,{vertex,level}}
        queue<pair<TreeNode*,pair<int,int>>>q;

        q.push({root,{0,0}});

        // nodes--- vartex,level,node

        map<int,map<int,multiset<int>>>nodes;

        while(!q.empty()){
            auto temp=q.front();
            q.pop();
            TreeNode* node=temp.first;

            int x=temp.second.first;
            int y=temp.second.second;

            nodes[x][y].insert(node->val);

            if(node->left)q.push({node->left,{x-1,y+1}});
            if(node->right)q.push({node->right,{x+1,y+1}});
        }

        for(auto vet:nodes){
            vector<int>col;
            for(auto lev:vet.second){
                col.insert(col.end(),lev.second.begin(),lev.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};