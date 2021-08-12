#include <iostream>
#include <vector>
using namespace std;

//Should be used when you don't know whether n1 and n2 are present in the tree or not
//Because the efficient solution gives wrong answer if any one of n1 or n2 is not present

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

bool findPath(Node* root, vector<Node*> &p, int n)
{
	if(root==NULL)
		return false;
	p.push_back(root);
	if(root->data==n)
		return true;
	if(findPath(root->left,p,n) || findPath(root->right,p,n))
	{
		return true;
	}
	p.pop_back();
	return false;
}

Node* LCA(Node* root, int n1, int n2)
{
	vector<Node*> path1,path2;
	if(findPath(root,path1,n1)==false || findPath(root,path2,n2)==false)
		return NULL;
	for(int i=0;i<path1.size()-1 && i<path2.size()-1;i++)
		if(path1[i+1]!=path2[i+1])
			return path1[i];
	return NULL;
}

int main()
{
	Node* root=new Node(10);
	root->left=new Node(50);
	root->right=new Node(60);
	root->left->left=new Node(70);
	root->left->right=new Node(20);
	root->left->left->left=new Node(40);
	root->left->right->left=new Node(90);
	root->left->right->left->left=new Node(30);
	root->left->right->right=new Node(80);
	Node* lca=LCA(root,30,80);
	cout<<lca->data<<" ";
	return 0;
}

//Time Complexity: O(n)
//Requires two traversals of tree
//Auxiliary Space: O(n)
