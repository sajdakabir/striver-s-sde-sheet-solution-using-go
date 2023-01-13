vector<int> findSpiral(Node *root)
{
    vector<int>ans;
    if(!root)return{};
    queue<Node*>q;
    q.push(root);
    int level=0;
    while(!q.empty()){
        int n=q.size();
        vector<int>v;
        while(n--){
            Node*temp=q.front();
            q.pop();
            v.push_back(temp->data);
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        if(level%2==0){
            reverse(v.begin(),v.end());
        }
        for(auto it:v){
            ans.push_back(it);
        }
        level++;
    }
    return ans;
}