Node* insert(Node* root, int Key)
{
    if(!root){
        Node *t= new Node(Key);
        return t;
    }
    if(Key==root->data) return root;
    
    if(Key<root->data){
        root->left=insert(root->left,Key);
    }
    else if(Key>root->data){
        root->right=insert(root->right,Key);
    }
    
    return root;
    
}
