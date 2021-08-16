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

int postorder;
Node* Tree(int in[], int post[], int is, int ie)
{
	if(is>ie)
		return NULL;
	Node* root=new Node(post[postorder--]);
	int inIndex;
	for(int i=is;i<=ie;i++)
	{
		if(in[i]==root->data)
		{
			inIndex=i;
			break;
		}
	}
	root->right=Tree(in,post,inIndex+1,ie);
	root->left=Tree(in,post,is,inIndex-1);
	return root;
}

void Inorder(Node* root)
{
	if(root==NULL)
		return;
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}

void Postorder(Node* root)
{
	if(root==NULL)
		return;
	Postorder(root->left);
	Postorder(root->right);
	cout<<root->data<<" ";	
}

int main()
{
	int in[]={4,8,2,5,1,6,3,7};
	int post[]={8,4,5,2,6,7,3,1};
	postorder=7;
	Node* root=Tree(in,post,0,7);
	
	Inorder(root);
	cout<<endl<<endl;
	Postorder(root);
	return 0;
}

//Time Complexity: O(n^2)
//Auxiliary Space: O(h)
