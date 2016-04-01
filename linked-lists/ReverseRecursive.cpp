/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* Reverse(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* newHead = Reverse(head->next); // reverse all but first
    head->next->next = head; // make original second point at first
    head->next = NULL; // make original first point at nothing

    return newHead;
}

