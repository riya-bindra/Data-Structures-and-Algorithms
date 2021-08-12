#include <iostream>
using namespace std;

//Gives wrong answer if any one of n1 or n2 is not present

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

Node* LCA(Node* root, int n1, int n2)
{
	if(root==NULL)
		return NULL;
	if(root->data==n1 || root->data==n2)
		return root;
	Node* lca1=LCA(root->left,n1,n2);
	Node* lca2=LCA(root->right,n1,n2);
	if(lca1!=NULL && lca2!=NULL)
		return root;
	if(lca1!=NULL)
		return lca1;
	else
		return lca2;	
}

int main()
{
	Node* root=new Node(10);
	root->left=new Node(50);
	root->right=new Node(60);
	root->left->left=new Node(70);
	root->left->right=new Node(20);
	root->left->left->left=new Node(40);
	root->left->right->left=new Node(90);
	root->left->right->left->left=new Node(30);
	root->left->right->right=new Node(80);
	Node* lca=LCA(root,30,80);
	cout<<lca->data<<" ";
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(h)
