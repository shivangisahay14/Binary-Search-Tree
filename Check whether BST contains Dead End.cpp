void utility(Node *root,int l,int r,bool &flag){
    if(!root) return;
    if(flag) return;
    
    if(!root->left && !root->right){
        if(l==r || r==1){
            flag=true;
        }
    }
    utility(root->left,l,root->data-1,flag);
    utility(root->right,root->data+1,r,flag);
}

/*You are required to complete below method */
bool isDeadEnd(Node *root)
{
    int l=INT_MIN;
    int r=INT_MAX;
    bool flag=false;
    utility(root,l,r,flag);
    
    return flag;
}
