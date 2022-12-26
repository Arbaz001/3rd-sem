bool has_cycle(SinglyLinkedListNode* head) {
SinglyLinkedListNode* cur1 = head;
    SinglyLinkedListNode* cur2 = head;
    int result = 0;
    while (cur1 && cur2)
    {
        cur1 = cur1->next;
        cur2 = cur2->next;
        if (cur2)
        {
            cur2 = cur2->next;
        }
        
        if (cur1 == cur2)
        {
            result = 1;
            break;
        }
    }
    return result;

}
