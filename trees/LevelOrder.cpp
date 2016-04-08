#include<queue>
/*
   struct node
   {
   int data;
   node* left;
   node* right;
   }*/

void LevelOrder(node * root)
{

    queue<node*> q;

    q.push(root);


    while(!q.empty()){
        root  = q.front();
        cout<<root->data<<" ";
        q.pop();

        if(root->left != NULL) q.push(root->left);
        if(root->right != NULL) q.push(root->right);
    }


}

