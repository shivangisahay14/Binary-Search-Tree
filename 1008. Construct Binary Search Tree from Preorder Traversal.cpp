 TreeNode* bstFromPreorderUtil(vector<int> &preorder, int &i, int bound){
        if(i == preorder.size() || preorder[i] > bound) return NULL;
        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = bstFromPreorderUtil(preorder, i, root->val);
        root->right = bstFromPreorderUtil(preorder, i, bound);
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return bstFromPreorderUtil(preorder, i, INT_MAX);
    } 
