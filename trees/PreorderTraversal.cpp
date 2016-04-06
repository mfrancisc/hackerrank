/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void Preorder(node *root) {
        if(root != NULL)
        {
            cout << root->data << " "; 
        }
    
    if(root->left != NULL){
        Preorder(root->left);
    }
    
    if(root->right != NULL){
        Preorder(root->right);
    }
}

