class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        if(head==NULL)
            return 0;
        int count=1;
        while(head->next!=NULL)
        {
            head=head->next;
            count++;
        }
        return count;
    
    }
};
