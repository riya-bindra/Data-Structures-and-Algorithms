DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    
    DoublyLinkedListNode* curr=llist;
    DoublyLinkedListNode* temp=new DoublyLinkedListNode(data);
    
    if(temp->data<curr->data)
    {
        temp->prev=NULL;
        temp->next=curr;
        curr->prev=temp;
        return temp;
    }
    while(curr->next!=NULL && curr->next->data<temp->data)
    {
        curr=curr->next;
    }
    
    if(curr->next!=NULL)
    {
        temp->next=curr->next;
        curr->next->prev=temp;
    }
    temp->prev=curr;
    curr->next=temp;
    return llist;

}

//Time Complexity: O(n)
//Auxiliary Space: O(1)
