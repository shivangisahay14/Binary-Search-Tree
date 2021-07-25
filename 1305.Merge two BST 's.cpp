void utility(Node* root,stack<Node*>&s){
        Node* curr = root;
        while(curr != NULL){
            s.push(curr);
            curr = curr->left;
        }
    }
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2)
    {
        vector<int>v;
       stack<Node*>s1,s2;
       utility(root1,s1);
       utility(root2,s2);
       while(!s1.empty() && !s2.empty()){
           Node* curr1 = s1.top();
           Node* curr2 = s2.top();
           if(curr1->data  < curr2->data){
               v.push_back(curr1->data);
               s1.pop();
               utility(curr1->right,s1);
           }
           else if(curr2->data < curr1->data){
               v.push_back(curr2->data);
               s2.pop();
               utility(curr2->right,s2);
           }
           else{
               v.push_back(curr1->data);
               v.push_back(curr2->data);
               s1.pop();
               s2.pop();
               utility(curr1->right,s1);
               utility(curr2->right,s2);
        }
    } 
    
            while(!s1.empty()){
                Node* curr = s1.top();
                s1.pop();
                v.push_back(curr->data);
                utility(curr->right,s1);
            }
            while(!s2.empty()){
                Node* curr = s2.top();
                s2.pop();
                v.push_back(curr->data);
                utility(curr->right,s2);
            }         
            
            return v;        
    }
