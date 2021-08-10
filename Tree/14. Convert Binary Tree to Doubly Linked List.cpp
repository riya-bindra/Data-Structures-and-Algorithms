#include <iostream>
using namespace std;



struct Node
{
	int data;
	Node* left;
	Node* right;
	Node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}	
};

Node* prev=NULL;
Node* head=NULL;

Node* BTToDLL(Node* root)
{
	if(root==NULL)
		return root;
	BTToDLL(root->left);
	if(prev==NULL)
		head=root;
	else
	{
		root->left=prev;
		prev->right=root;
	}
	prev=root;
	BTToDLL(root->right);
	return head;
}

void printDLL(Node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->right;
	}
}

int main()
{
	Node* root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(20);
	root->right->left=new Node(30);
	root->right->right=new Node(35);
	Node* head=BTToDLL(root);
	printDLL(head);
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(h)
