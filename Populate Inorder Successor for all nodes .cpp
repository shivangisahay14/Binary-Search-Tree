class Solution
{
public:
    
    Node* prev=NULL;
    void populateNext(Node *root)
    {
        if(root==nullptr)
        {
            return;
        }
        populateNext(root->left);
        if(prev!=nullptr)
        {
            prev->next=root;
        }
        prev=root;
        populateNext(root->right);
        //code here
    }
};
