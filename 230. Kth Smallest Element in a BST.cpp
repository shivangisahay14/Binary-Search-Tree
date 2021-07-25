void InOrderTraversal(Node *root,vector<int>&v){
        if(!root) return;
        
        InOrderTraversal(root->left,v);
        v.push_back(root->data);
        InOrderTraversal(root->right,v);
        
    }
    // Return the Kth smallest element in the given BST 
    int KthSmallestElement(Node *root, int K)
    {
        vector<int>v;
        
        InOrderTraversal(root,v);
        if(K>v.size()){
            return -1;
        }
        
        return v[K-1];
        //add code here.
    }


void inorder(TreeNode* root, int& k) {
            if (!root) return;
            inorder(root->left, k);
            if (--k == 0) res = root->val;
            inorder(root->right, k);
        }

        int kthSmallest(TreeNode* root, int k) {
            inorder(root, k);
            return res;
        }

    private:
        int res;
