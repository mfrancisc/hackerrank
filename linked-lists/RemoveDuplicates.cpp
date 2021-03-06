/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    if(!head) return head;
    
    Node* result = head;
    while(head->next){
        if(head->next->data == head->data)
            {
            Node* temp = head->next;
            head->next = head->next->next;
            delete temp;
        }else{
            head = head->next;
        }
    }
    
    return result;
}
