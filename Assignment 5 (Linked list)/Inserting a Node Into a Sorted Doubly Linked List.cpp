DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

  DoublyLinkedListNode* node = new DoublyLinkedListNode(data);
  
  node->data = data;
  node->next = node->prev = NULL;
  
  if(head==NULL)
   return node;
   

 if(head->data > data){
     head->prev = node;
     node->next = head;
     return node;
 }
 
 DoublyLinkedListNode* next = sortedInsert(head->next, data);
 head->next = next;
 next->prev = head;
 return head;

}
