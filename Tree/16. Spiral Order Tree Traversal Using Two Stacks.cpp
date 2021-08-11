#include <iostream>
#include <stack>
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

void Spiral(Node* root)
{
	if(root==NULL)
		return;
	stack<Node*> s1;
	stack<Node*> s2;
	s1.push(root);
	while(!s1.empty() || !s2.empty())
	{
		while(!s1.empty())
		{
			Node* curr=s1.top();
			s1.pop();
			cout<<curr->data<<" ";
			if(curr->left!=NULL)
				s2.push(curr->left);
			if(curr->right!=NULL)
				s2.push(curr->right);
		}
		while(!s2.empty())
		{
			Node* curr=s2.top();
			s2.pop();
			cout<<curr->data<<" ";
			if(curr->right!=NULL)
				s1.push(curr->right);
			if(curr->left!=NULL)
				s1.push(curr->left);
		}
	}
}

int main()
{
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->right->left=new Node(4);
	root->right->right=new Node(5);
	root->right->left->left=new Node(6);
	root->right->left->right=new Node(7);
	root->right->right->right=new Node(8);
	root->right->left->left->left=new Node(9);
	root->right->left->left->right=new Node(11);
	root->right->right->right->left=new Node(12);
	root->right->right->right->right=new Node(13);
	Spiral(root);
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(n)
