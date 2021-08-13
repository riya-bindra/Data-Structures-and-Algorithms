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

Node* Insert(Node* root,int x)
{
	Node* temp=new Node(x);
	if(root==NULL)
		return temp;
	Node* curr=root;
	Node* parent=NULL;
	
	while(curr!=NULL)
	{
		parent=curr;
		if(x==curr->data)
			return root;
		else if(x<curr->data)
			curr=curr->left;
		else
			curr=curr->right;
	}
	if(parent->data<x)
		parent->right=temp;
	else
		parent->left=temp;
	return root;	
}

void InorderTraversal(Node* root)
{
	if(root==NULL)
		return;
	InorderTraversal(root->left);
	cout<<root->data<<" ";
	InorderTraversal(root->right);
}


int main()
{
	Node* root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->right=new Node(80);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	InorderTraversal(root);
	cout<<endl<<endl;
	
	root=Insert(root,4);
	InorderTraversal(root);
	cout<<endl<<endl;
	
	root=Insert(root,0);
	InorderTraversal(root);
	cout<<endl<<endl;
	
	root=Insert(root,70);
	InorderTraversal(root);
	cout<<endl<<endl;
	
	root=Insert(root,83);
	InorderTraversal(root);
	cout<<endl<<endl;
	return 0;
}

//Time Complexity: O(h)
//Auxiliary Space: O(1)
