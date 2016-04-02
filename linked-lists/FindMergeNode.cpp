/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    Node *first = headA;
    Node *second = headB;
    
    while(first != second)
        {
        if(first->next == NULL){
            first = headB;
        }else{
            first = first->next;
        }
        
        
        if(second->next == NULL){
            second = headA;
        }else{
            second = second->next;
        }
    }
    
    return first->data;
}

