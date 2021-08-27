SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    if(llist==NULL || llist->next==NULL)
        return llist;
    SinglyLinkedListNode* prev=NULL;
    SinglyLinkedListNode* curr=llist;
    SinglyLinkedListNode* n=NULL;
    while(curr!=NULL)
    {
        n=curr->next;
        curr->next=prev;
        prev=curr;
        curr=n;
    }
    return prev;
}

//Time Complexity: O(n)
//Auxiliary Space: O(1)
