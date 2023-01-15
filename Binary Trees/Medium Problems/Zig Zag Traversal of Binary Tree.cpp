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


// another way

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int>ans;
    	if(root==NULL)return ans;
    	queue<Node*>q;
    	q.push(root);
    	int f=true;
    	while(!q.empty()){
    	    int size=q.size();
    	    vector<int>temp(size);
    	    
    	    for(int i=0;i<size;i++){
    	        Node* node=q.front();
    	        q.pop();
    	        int index=f?i:(size-1-i);
    	        temp[index]=node->data;
    	        if(node->left)q.push(node->left);
    	        if(node->right)q.push(node->right);
    	    }
    	    f=!f;
    	    for(auto it:temp){
    	        ans.push_back(it);
    	    }
    	
    	}
    	    return ans;
    }
};