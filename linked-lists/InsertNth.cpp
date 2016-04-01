/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;
    
    if(head == NULL){
        return temp;
    }
    
    if(position == 0){
        temp->next = head;
        head = temp;
        return head;
    }
    
    Node* temp1 = head;
    
    for(int n = 0; n < position - 1; n++){
        temp1 = temp1->next;
    }
    
    temp->next = temp1->next;
    temp1->next = temp;
    
    return head;
}

