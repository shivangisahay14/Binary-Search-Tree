class Solution{
  public:
    //Inorder traversal in original Binary tree
    void InOrderTraversal(Node *root,vector<int>&v){
        if(!root) return;
        
        InOrderTraversal(root->left,v);
        v.push_back(root->data);
        InOrderTraversal(root->right,v);
        
    }
    //replacing the binary tree to bst
    void transform(Node *root,vector<int>v,int &i){
        if(!root) return;
        
        transform(root->left,v,i);
        root->data=v[i];
        i++;
        transform(root->right,v,i);
        
    }
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    Node *binaryTreeToBST (Node *root)
    {
        if(!root) return NULL;
        vector<int>v;
        InOrderTraversal(root,v);
        sort(v.begin(),v.end());
        int i=0;
        transform(root,v,i);
        
        return root;
        
    }
};
