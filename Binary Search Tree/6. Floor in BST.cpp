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

Node* Floor(Node* root, int x)
{
	Node* res=NULL;
	while(root!=NULL)
	{
		if(x==root->data)
			return root;
		else if(x>root->data)
		{
			res=root;
			root=root->right;
		}
		else
			root=root->left;
	}
	return res;
}

int main()
{
	Node* root=new Node(50);
	root->left=new Node(30);
	root->left->left=new Node(20);
	root->left->right=new Node(40);
	root->right=new Node(70);
	root->right->left=new Node(60);
	root->right->right=new Node(80);
	root->right->left->left=new Node(55);
	root->right->left->right=new Node(65);
	
	Node* floor=Floor(root,65);
	cout<<floor->data<<endl;
	
	floor=Floor(root,58);
	cout<<floor->data<<endl;
	
	floor=Floor(root,10);
	if(floor==NULL)
		cout<<"NULL"<<endl;
	else
		cout<<floor->data<<endl;
	return 0;
}

//Time Complexity: O(h)
//Auxiliary Space: O(1)

