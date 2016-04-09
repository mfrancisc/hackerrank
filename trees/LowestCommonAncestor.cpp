/*
   Node is defined as 

   typedef struct node
   {
   int data;
   node * left;
   node * right;
   }node;

*/


node * lca(node * root, int v1,int v2)
{
    //Decide if you have to call rekursively
    //Samller than both
    if(root->data < v1 && root->data < v2){
        return lca(root->right,v1,v2);
    }
    //Bigger than both
    if(root->data > v1 && root->data > v2){
        return lca(root->left,v1,v2);
    }

    //Else solution already found
    return root;
}


