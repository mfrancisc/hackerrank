/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    Node* temp = head;
    
    if(position == 0){
        head = temp->next;
        
        delete temp;
        
        return head;
    }
    
    
    for(int n = 0; n < position - 1; n++){
        temp = temp->next;
    }
    
    Node* temp1 = temp->next;
    temp->next = temp1->next;
    
    delete temp1;
    
    return head;
  
}

