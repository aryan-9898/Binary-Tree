//LNR
void inOrder(Node *root) {
        if(root==NULL){
            return;
        }
        
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);

}


//NLR
void preOrder(Node *root) {
        if(root){
            cout<<root -> data<<" ";
            preOrder(root -> left);
            preOrder(root -> right);
        }
}


//LRN
void postOrder(Node *root) {
        if(root){
            postOrder(root -> left);
            postOrder(root -> right);
            cout<<root -> data<<" ";
        }
}
