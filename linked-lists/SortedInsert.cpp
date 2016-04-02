/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* GetNewNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    
    return newNode;
}

Node* SortedInsert(Node *head,int data) {
    Node *n = GetNewNode(data);
    
    if (head == NULL) {
        return n;
    }
    else if (data <= head->data) {
        n->next = head;
        head->prev = n;
        return n;
    }
    else {
        Node *rest = SortedInsert(head->next, data);
        head->next = rest;
        rest->prev = head;
        
    }
    
    return head;
}



