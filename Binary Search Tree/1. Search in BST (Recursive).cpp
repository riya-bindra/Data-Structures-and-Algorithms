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

bool Search(Node* root, int key)
{
	if(root==NULL)
		return false;
	if(root->data==key)
		return true;
	else if(key<root->data)
		return Search(root->left,key);
	else
		return Search(root->right,key);
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
	cout<<Search(root,16)<<endl;
	cout<<Search(root,80)<<endl;
	cout<<Search(root,81)<<endl;
	cout<<Search(root,3)<<endl;
	cout<<Search(root,2)<<endl;
	return 0;
}

//Time Complexity: O(h)
//Auxiliary Space: O(h)
