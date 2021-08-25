bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    if(head1==NULL && head2==NULL)
        return true;
    else if((head1!=NULL && head2==NULL) || (head2!=NULL && head1==NULL))
        return false;
    return ((head1->data==head2->data) && areIdentical(head1->next,head2->next));
}
