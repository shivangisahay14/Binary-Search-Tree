void replace(int arr[], int n)
{
    Node* root = NULL;
 
    // start from right to left
    for (int i = n - 1; i >= 0; i--) {
        Node* succ = NULL;
 
        // insert current element into BST and
        // find its inorder successor
        root = insert(root, arr[i], succ);
 
        // replace element by its inorder
        // successor in BST
        if (succ)
            arr[i] = succ->data;
        else // No inorder successor
            arr[i] = -1;
    }
}

Node* insert(Node* node, int data, Node*& succ)
{
     
    /* If the tree is empty, return a new node */
    if (node == NULL)
        return node = newNode(data);
 
    // If key is smaller than root's key, go to left
    // subtree and set successor as current node
    if (data < node->data) {
        succ = node;
        node->left = insert(node->left, data, succ);
    }
 
    // go to right subtree
    else if (data > node->data)
        node->right = insert(node->right, data, succ);
    return node;
}
