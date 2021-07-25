bool search(Node* root2, int k)
{
    if(!root2) return false;
    
    if(k==root2->data){
        return true;
    }
    
    bool res1=search(root2->left,k);
    if(res1) return true;
    
    bool res2=search(root2->right,k);
    
    return res2;
}
void solve(Node* root1, Node* root2, int k,int &count){
    if(!root1) return;
    
    solve(root1->left,root2,k,count);
    if(search(root2,(k-root1->data))){
        count++;
    }
    solve(root1->right,root2,k,count);
}
// You are required to complete this function

int countPairs(Node* root1, Node* root2, int x)
{
    int count=0;
    solve(root1,root2,x,count);
    return count;
    
}
