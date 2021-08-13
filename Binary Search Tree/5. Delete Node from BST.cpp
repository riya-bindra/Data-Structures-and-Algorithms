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

Node* InorderSuccessor(Node* root)
{
	Node* curr=root->right;
	while(curr!=NULL && curr->left!=NULL)
		curr=curr->left;
	return curr;
}

Node* Delete(Node* root,int x)
{
	if(root==NULL)
		return root;
	if(x<root->data)
		root->left=Delete(root->left,x);
	else if(x>root->data)
		root->right=Delete(root->right,x);
	else //x==root->data
	{
		if(root->left==NULL)
		{
			Node* temp=root->right;
			delete root;
			return temp;
		}
		else if(root->right==NULL)
		{
			Node* temp=root->left;
			delete root;
			return temp;
		}
		else
		{
			Node* succ=InorderSuccessor(root);
			root->data=succ->data;
			root->right=Delete(root->right, succ->data);
		}
	}
	return root;
}

void InorderTraversal(Node* root)
{
	if(root==NULL)
		return;
	InorderTraversal(root->left);
	cout<<root->data<<" ";
	InorderTraversal(root->right);
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
	InorderTraversal(root);
	cout<<endl<<endl;
	
	root=Delete(root,3);
	InorderTraversal(root);
	cout<<endl<<endl;
	
	root=Delete(root,15);
	InorderTraversal(root);
	cout<<endl<<endl;
	
	root=Delete(root,18);
	InorderTraversal(root);
	cout<<endl<<endl;
	
	root=Delete(root,83);
	InorderTraversal(root);
	cout<<endl<<endl;
	
	return 0;
}

//Time Complexity: O(h)
//Auxiliary Space: O(h)
