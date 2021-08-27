int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    SinglyLinkedListNode* first=llist;
    SinglyLinkedListNode* second=llist;
    for(int i=0;i<=positionFromTail;i++)
    {
        first=first->next;   
    }
    while(first!=NULL)
    {
        second=second->next;
        first=first->next;
    }
    return second->data;

}

//Time Complexity: O(n)
//Auxiliary Space: O(1)
