#include <iostream>
#include <queue>
using namespace std;

//Idea is based on preorder Traversal
int maxLevel=0;

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

void LeftView(Node* root,int level=1)
{
	if(root==NULL)
		return;
	if(maxLevel<level)
	{
		cout<<root->data<<" ";
		maxLevel=level;
	}
	LeftView(root->left,level+1);
	LeftView(root->right,level+1);
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
	LeftView(root,1);
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(h)
//where h is the height of the tree
