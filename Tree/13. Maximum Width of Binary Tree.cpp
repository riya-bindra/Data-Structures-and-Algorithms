#include <iostream>
#include <queue>
using namespace std;

//Based on Level Order Traversal

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

int maxWidth(Node* root)
{
	if(root==NULL)
		return 0;
	queue<Node*> q;
	q.push(root);
	int res=0;
	while(!q.empty())
	{
		int count=q.size();
		res=max(count,res);
		for(int i=0;i<count;i++)
		{
			Node* curr=q.front();
			q.pop();
			if(curr->left!=NULL)
				q.push(curr->left);
			if(curr->right!=NULL)
				q.push(curr->right);
		}
	}
	return res;
}

int main()
{
	Node* root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(90);
	root->left->left=new Node(20);
	root->left->right=new Node(60);
	root->right->left=new Node(100);
	root->right->left->left=new Node(200);
	cout<<maxWidth(root);
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(w)
//where w is the width of the tree
