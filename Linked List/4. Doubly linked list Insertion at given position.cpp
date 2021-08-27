void addNode(Node *head, int pos, int data)
{
   // Your code here
   Node* temp=new Node(data);
   Node* curr=head;
   for(int i=0;i<=(pos-1) && curr!=NULL;i++)
   {
       curr=curr->next;
   }
   if(curr!=NULL)
   {
      if(curr->next!=NULL)
      {
    temp->next=curr->next;
    curr->next->prev=temp;
      }
    temp->prev=curr;
    curr->next=temp;
   }
}

//Time Complexity: O(n)
//Auxiliary Space: O(1)
