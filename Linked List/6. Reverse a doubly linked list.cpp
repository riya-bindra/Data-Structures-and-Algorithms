DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    
    if(llist==NULL || llist->next==NULL)
    {
        return llist;
    }
    
    DoublyLinkedListNode* curr=llist;
    DoublyLinkedListNode* prev=NULL;
    
    while(curr!=NULL)
    {
        prev=curr->prev;
        
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    
    return prev->prev;
}

//Time Complexity: O(n)
//Auxiliary Space: O(1)
