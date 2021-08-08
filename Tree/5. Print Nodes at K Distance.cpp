#include <iostream>
using namespace std;

struct Node
{
	int key;
	Node* left;
	Node* right;
	Node(int k)
	{
		key=k;
		left=NULL;
		right=NULL;
	}
};

void printKDistance(Node* root, int k, int dist=0)
{
	if(root==NULL)
		return;
	else if(dist==k)
	{
		cout<<root->key<<" ";
	}
	else
	{
		printKDistance(root->left,k,dist+1);
		printKDistance(root->right,k,dist+1);
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
	printKDistance(root,2);
	cout<<endl<<endl;
	printKDistance(root,3);
	cout<<endl<<endl;
	printKDistance(root,0);
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(H)
