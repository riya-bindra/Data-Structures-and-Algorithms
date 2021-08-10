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

void LevelOrder(Node* root)
{
	if(root==NULL)
		return;
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		Node* curr=q.front();
		q.pop();
		cout<<curr->data<<" ";
		if(curr->left!=NULL)
			q.push(curr->left);
		if(curr->right!=NULL)
			q.push(curr->right);
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
	LevelOrder(root);
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: Theta(w)
//where w is the width of the tree
