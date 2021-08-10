#include <iostream>
#include <cmath>
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

int Balanced(Node* root)
{
	if(root==NULL)
		return 0;
	int lh=Balanced(root->left);
	if(lh==-1)
		return -1;
	int rh=Balanced(root->right);
	if(rh==-1)
		return -1;	
	if(abs(lh-rh)>1)
		return -1;
	return max(lh,rh)+1;
}

int main()
{
	Node* root=new Node(3);
	root->left=new Node(4);
	root->right=new Node(8);
	root->left->left=new Node(6);
	root->left->right=new Node(9);
	root->right->left=new Node(1);
	root->right->right=new Node(7);
	root->right->right->left=new Node(90);
	if(Balanced(root)==-1)
		cout<<"Unbalanced"<<endl<<endl;
	else
		cout<<"Balanced"<<endl<<endl;
	
	Node* root2=new Node(3);
	root2->left=new Node(4);
	root2->right=new Node(8);
	root2->left->left=new Node(6);
	root2->left->right=new Node(9);
	root2->right->right=new Node(7);
	root2->right->right->left=new Node(90);
	if(Balanced(root2)==-1)
		cout<<"Unbalanced"<<endl<<endl;
	else
		cout<<"Balanced"<<endl<<endl;	
}

//Time Complexity: O(n)
//Auxiliary Space: O(h)
//max h+1 function calls in function call stack
