Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
	Node* temp=new Node(x);
	if(head==NULL)
	{
	    return temp;
	}
	
	Node* fast=head;
	Node* slow=head;
	
	while(fast->next!=NULL && fast->next->next!=NULL)
	{
	    slow=slow->next;
	    fast=fast->next->next;
	}
	temp->next=slow->next;
	slow->next=temp;
	return head;
	
}

//Time Complexity: O(n)
//Auxiliary Space: O(1)
