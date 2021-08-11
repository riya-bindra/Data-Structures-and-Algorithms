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

int res=0;
int height(Node* root)
{
	if(root==NULL)
		return 0;
	int lh=height(root->left);
	int rh=height(root->right);
	res=max(res,1+lh+rh);
	return 1+max(lh,rh);
	
}

int main()
{
	Node* root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->left->left=new Node(60);
	root->right->right=new Node(60);
	root->right->right->right=new Node(70);
	
	cout<<"Height: "<<height(root)<<endl;
	cout<<"Diameter: "<<res<<endl;	
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(h)
