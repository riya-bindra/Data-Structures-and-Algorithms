#include <iostream>
#include <queue>
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

int size(Node* root)
{
	if(root==NULL)
		return 0;
	else 
		return 1+size(root->left)+size(root->right);
}

int main()
{
	Node* root=new Node(10);
	root->left=new Node(20);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right=new Node(30);
	root->right->right=new Node(70);
	root->right->right->right=new Node(80);
	cout<<size(root)<<endl;
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(h)
//where h is the height of the tree
