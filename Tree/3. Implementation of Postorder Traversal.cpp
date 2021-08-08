#include <iostream>
using namespace std;

struct Node
{
	int key;
	Node* left;
	Node* right;
	Node(int k)
	{
		key=k;
		left=NULL;
		right=NULL;
	}
};

void Postorder(Node *root)
{
	if(root!=NULL)
	{
		Postorder(root->left);
		Postorder(root->right);
		cout<<root->key<<" ";
	}
}

int main()
{
	Node* root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	Postorder(root);
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(H)
