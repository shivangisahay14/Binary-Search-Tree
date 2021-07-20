TreeNode *util(TreeNode* root)
{
    if(!root) return NULL;
    
    while(root->right){
        root=root->right;
    }
    return root;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(!root) return NULL;
    
        if(key==root->val){
            if(!root->left and !root->right) return NULL;

            if(root->left and root->right){
                TreeNode *temp=util(root->left);
                root->val=temp->val;
                root->left=deleteNode(root->left,temp->val);
                return root;
            }

            if(root->left){
                return root->left;
            }
            if(root->right){
                return root->right;
            }
        }
        else if(key>root->val){
            root->right=deleteNode(root->right,key);
        }
        else{
            root->left=deleteNode(root->left,key);
        }
        return root;       
        
        
    }
