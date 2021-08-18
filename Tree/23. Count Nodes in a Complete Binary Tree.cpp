#include <iostream>
#include <cmath>
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

int countNodes(Node* root)
{
	int lh=0,rh=0;
	Node* curr=root;
	while(curr!=NULL)
	{
		lh++;
		curr=curr->left;
	}
	while(curr!=NULL)
	{
		rh++;
		curr=curr->right;
	}
	if(lh==rh)
		return pow(2,lh)-1;
	else 
		return 1+countNodes(root->left)+countNodes(root->right);
}

int main()
{
	Node* root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->left->left=new Node(80);
	root->left->right=new Node(50);
	root->left->left->right=new Node(90);
	root->left->right->left=new Node(100);
	root->right->left=new Node(60);
	root->right->right=new Node(70);
	
	cout<<countNodes(root)<<endl;
	return 0;
}

//Time Complexity: O(log n*log n)
//Auxiliary Space: O(h)
