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

bool ChildrenSumProperty(Node* root)
{
	if(root==NULL)
		return true;
	if(root->left==NULL && root->right==NULL)
		return true;
	int sum=0;
	if(root->left!=NULL)
		sum+=root->left->data;
	if(root->right!=NULL)
		sum+=root->right->data;
	return (root->data==sum) && ChildrenSumProperty(root->left) && ChildrenSumProperty(root->right);
}


int main()
{
	Node* root=new Node(20);
	cout<<ChildrenSumProperty(root)<<endl<<endl;
	root->left=new Node(8);
	root->left->left=new Node(3);
	root->left->right=new Node(5);
	root->right=new Node(12);
	cout<<ChildrenSumProperty(root)<<endl<<endl;
	
	Node* root2=new Node(3);
	root->left=new Node(1);
	root->right=new Node(2);
	root->right->left=new Node(1);
	root->right->right=new Node(2);
	cout<<ChildrenSumProperty(root)<<endl<<endl;
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(h)
//where h is the height of the tree
