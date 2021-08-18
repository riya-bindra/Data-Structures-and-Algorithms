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
int burnTree(Node* root,int leaf, int &dist)
{
	if(root==NULL)
		return 0;
	if(root->data==leaf)
	{
		dist=0;
		return 0;
	}
	int ldist=-1,rdist=-1;
	int lh=burnTree(root->left,leaf,ldist);
	int rh=burnTree(root->right,leaf,rdist);
	if(ldist!=-1)
	{
		dist=ldist+1;
		res=max(res,dist+rh);
	}
	else if(rdist!=-1)
	{
		dist=rdist+1;
		res=max(res,dist+lh);
	}
	return 1+max(lh,rh);
}


int main()
{
	Node* root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(80);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->left->left->left=new Node(60);
	root->left->left->left->left=new Node(70);
	int d=-1;
	int height=burnTree(root,50,d);
	cout<<"Height: "<<height<<endl<<"Result: "<<res;
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(h)
