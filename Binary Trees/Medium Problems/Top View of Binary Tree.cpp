class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
    //   q-->{node,line}
    vector<int>ans;
    
    queue<pair<Node*,int>>q;
    
    // map---{line,node-->val}
    
    map<int,int>mp;
    
    q.push({root,0});
    
    while(!q.empty()){
        auto temp=q.front();
        q.pop();
        Node* node=temp.first;
        int line=temp.second;
        
        if(mp.find(line)==mp.end())mp[line]=node->data;
        
        if(node->left)q.push({node->left,line-1});
        if(node->right)q.push({node->right,line+1});
    }
    for(auto x:mp){
        ans.push_back(x.second);
    }
    return ans;
    }

};