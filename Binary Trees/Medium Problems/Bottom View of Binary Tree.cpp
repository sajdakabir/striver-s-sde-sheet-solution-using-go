class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        
        vector<int>ans;
        queue<pair<Node* ,int>>q;
        
        map<int,int>mp;
        
        q.push({root,0});
        
        while(!q.empty()){
            auto temp=q.front();
            q.pop();
            Node* node=temp.first;
            int line=temp.second;
            
            mp[line]=node->data;
            if(node->left)q.push({node->left,line-1});
            if(node->right)q.push({node->right,line+1});
        }
        
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};