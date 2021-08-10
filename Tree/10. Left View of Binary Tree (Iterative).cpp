#include <iostream>
#include <queue>
using namespace std;

//Idea is based on Level Order Traversal

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

void LeftView(Node* root)
{
	if(root==NULL)
		return;
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		int count=q.size();
		for(int i=0;i<count;i++)
		{
			Node* curr=q.front();
			q.pop();
			if(i==0)
				cout<<curr->data<<" ";
			if(curr->left!=NULL)
				q.push(curr->left);
			if(curr->right!=NULL)
				q.push(curr->right);
		}
	}
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
	LeftView(root);
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(w)
//where w is the width of the tree
