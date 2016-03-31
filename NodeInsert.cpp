/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    // create node
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;

    if(!head) { // empty list becomes the new node
        return temp;
    } else { // find last and link the new node
        Node* last = head;
        while(last->next) last=last->next;
        last->next = temp;
        return head;
    }
}

