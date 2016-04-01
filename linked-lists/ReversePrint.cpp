/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
    Node* current = new Node;
    Node* prev = new Node;
    Node* next = new Node;
    current = head;
    prev = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    head = prev;
    
    while(head){
        cout << head->data << endl;
        head = head->next;
        
    }
}

