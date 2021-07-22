 bool isBSTUtil(TreeNode* root, TreeNode *&prev) 
{ 
    // traverse the tree in inorder fashion and  
    // keep track of prev node 
    if (root) 
    { 
        if (!isBSTUtil(root->left, prev)) 
          return false; 
   
        // Allows only distinct valued nodes  
        if (prev != NULL && root->val <= prev->val) 
          return false; 
   
        prev = root; 
   
        return isBSTUtil(root->right, prev); 
    } 
   
    return true; 
} 
    bool isValidBST(TreeNode* root) {
        
        TreeNode *prev = NULL; 
        return isBSTUtil(root, prev);
        
    }
