#include <iostream>
#include <vector>
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

int index=0;
Node* Deserialize(int arr[])
{
	if(arr[index]==-1)
	{
		index++;
		return NULL;
	}
	Node* root=new Node(arr[index]);
	index++;
	root->left=Deserialize(arr);
	root->right=Deserialize(arr);
	return root;	
}

void PreOrder(Node* root)
{
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
}

int main()
{
	int arr[]={10,20,30,-1,40,-1,-1,-1,-1};
	Node* root=Deserialize(arr);
	PreOrder(root);
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(h)
