bool findTarget(TreeNode* root, int k) {
	if(root == nullptr){
		return false;
	}
	return findTarget_helper( root, k , root );        // calling the helper
}
// inorder Travesal and searching for k - root->val in the BST 
bool findTarget_helper(TreeNode* temp, int k, TreeNode* root) {
	if(temp == nullptr){
		return false;
	}
	if(search( root, k - temp->val,temp)){
		return true;
	}
	return findTarget_helper( temp->left, k , root) || findTarget_helper( temp->right, k , root);        
}
//BST search function 
bool search(TreeNode* root, int k , TreeNode* current){        
	if(root == nullptr){
		return false;
	}
	if(current != root && root->val == k )  { // avoiding the current node in the search
		return true;
	}        
	return (k < root->val)? search( root->left, k ,current) : search( root->right, k ,current) ;
}


class Solution {
public:
    set<int> nums;
public:
    bool findTarget(TreeNode* root, int k) {
        if (root == NULL) return false;
        if (nums.find(k-root->val) != nums.end()) return true;
        nums.insert(root->val);
        return findTarget(root->left, k) || findTarget(root->right, k);
     
    }
};
