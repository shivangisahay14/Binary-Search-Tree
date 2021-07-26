struct bst{
    bool isBST;
    int size;
    int minm;
    int maxm;
};

bst utility(Node *root){
    if(!root){
        bst b={true,0,INT_MAX,INT_MIN};
        return b;
    }
    
    bst l=utility(root->left);
    bst r=utility(root->right);
    
    if(l.isBST && r.isBST && l.maxm<root->data && r.minm>root->data){
        bst b={true,
        1+l.size+r.size,
        min(root->data,l.minm),
        max(root->data,r.maxm)};
        
        return b;
    }
    
    
    bst b={false,
            max(l.size,r.size),
            -1,
            -1};
            
    return b;
    
}
// Return the size of the largest sub-tree which is also a BST
int largestBst(Node *root)
{
    bst b=utility(root);
    return b.size;
    
}
