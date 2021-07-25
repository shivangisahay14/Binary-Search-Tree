void InOrderTraversal(Node *root,vector<int>&v){
        if(!root) return;
        
        InOrderTraversal(root->left,v);
        v.push_back(root->data);
        InOrderTraversal(root->right,v);
        
    }
    int kthLargest(Node *root, int K)
    {
        vector<int>v;
        InOrderTraversal(root,v);
        return v[v.size()-K];
        
    }


class Solution
{
    public:
    void InOrderTraversal(Node *root,int&K){
        if (!root) return;
            InOrderTraversal(root->right, K);
            if (--K == 0) res = root->data;
            InOrderTraversal(root->left, K);
        
    }
    int kthLargest(Node *root, int K)
    {
        InOrderTraversal(root,K);
        return res;
        
    }
    private:
        int res;
};
