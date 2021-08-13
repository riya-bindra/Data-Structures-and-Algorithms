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

Node* Insert(Node* root, int x)
{
	if(root==NULL)
		return new Node(x);
	if(x<root->data)
		root->left=Insert(root->left,x);
	else if(x>root->data)
		root->right=Insert(root->right,x);
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
	
	Insert(root,4);
	InorderTraversal(root);
	cout<<endl<<endl;
	
	Insert(root,0);
	InorderTraversal(root);
	cout<<endl<<endl;
	
	Insert(root,70);
	InorderTraversal(root);
	cout<<endl<<endl;
	
	Insert(root,83);
	InorderTraversal(root);
	cout<<endl<<endl;
	return 0;
}

//Time Complexity: O(h)
//Auxiliary Space: O(h)
