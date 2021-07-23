void InOrderTraversal(TreeNode *root,vector<int>&v){
        if(!root) return;
        
        InOrderTraversal(root->left,v);
        v.push_back(root->val);
        InOrderTraversal(root->right,v);
        
    }
    
TreeNode *helper(vector<int>&v,int s,int e){
    
    if(s>e) return NULL;
    int mid=s+(e-s)/2;
    TreeNode *root=new TreeNode(v[mid]);
    
    root->left=helper(v,s,mid-1);
    root->right=helper(v,mid+1,e);
    
    return root;
}
    TreeNode* balanceBST(TreeNode* root) {
        
        if(!root) return NULL;
        vector<int>v;
        InOrderTraversal(root,v);
        return helper(v,0,v.size()-1);
        
    }
