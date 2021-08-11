#include <iostream>
#include <deque>
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
	deque<Node*> dq;
	dq.push_back(root);
	bool reverse=false;
	while(!dq.empty())
	{
		int count=dq.size();
		for(int i=0;i<count;i++)
		{
			if(reverse)
			{
				Node* curr=dq.back();
				dq.pop_back();
				cout<<curr->data<<" ";
				if(curr->right!=NULL)
					dq.push_front(curr->right);
				if(curr->left!=NULL)
					dq.push_front(curr->left);
			}
			else
			{
				Node* curr=dq.front();
				dq.pop_front();
				cout<<curr->data<<" ";
				if(curr->left!=NULL)
					dq.push_back(curr->left);
				if(curr->right!=NULL)
					dq.push_back(curr->right);
			}
		}
		reverse=!reverse;
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
