void levelOrder(Node * root) {
        queue<Node*> q;
        q.push(root);
        cout<<root->data<<" ";
        
        while(!q.empty()){
            Node* temp=q.front();
            q.pop();
            
            if(temp->left){
                q.push(temp->left);
                cout<<temp->left->data<<" ";
            }
            if(temp->right){
                q.push(temp->right);
                cout<<temp->right->data<<" ";
            }
        }


    }
