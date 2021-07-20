TreeNode* searchBST(TreeNode* root, int val) {
        
        if(!root) return NULL;
        
        if(val==root->val) return root;
        
        if(val<root->val){
            return searchBST(root->left,val);
            
        }
        else{
            return searchBST(root->right,val);            
        }
        
    }


bool search(Node* root, int x)
{
    if(!root) return false;
    
    if(x==root->data){
        return true;
    }
    
    bool res1=search(root->left,x);
    if(res1) return true;
    
    bool res2=search(root->right,x);
    
    return res2;
}
