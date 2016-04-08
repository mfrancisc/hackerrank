/*
   Node is defined as 

   typedef struct node
   {
   int data;
   node * left;
   node * right;
   }node;

*/


node * insert(node * root, int value)
{
    node* newNode = new node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    if(root == NULL) return newNode;


    node* temp = root;
    node* ancessor = root;

    while(temp){
        if(value < temp->data){
            ancessor = temp;
            temp = temp->left;
        }else if(temp->data < value){
            ancessor = temp;
            temp = temp->right;
        }
    }

    if(ancessor->data > value){
        ancessor->left = newNode;
    } else {
        ancessor->right = newNode;
    }


    return root;
}

