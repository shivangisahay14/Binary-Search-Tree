int minValue(Node* root)
{
    if(!root) return -1;
    
    if(!root->left && !root->right) return root->data;
    
    while(root->left){
        root=root->left;
    }
    return root->data;
}
