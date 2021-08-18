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

//Using Preorder Traversal
void Serialize(Node* root,vector<int> &arr)
{
	if(root==NULL)
	{
		arr.push_back(-1);
		return;
	}
	arr.push_back(root->data);
	Serialize(root->left,arr);
	Serialize(root->right,arr);
}

int main()
{
	Node* root=new Node(10);
	root->left=new Node(20);
	root->left->left=new Node(30);
	root->left->left->right=new Node(40);
	vector<int> arr;
	Serialize(root,arr);
	for(int i=0;i<arr.size();i++)
		cout<<arr[i]<<" ";
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(n) //2n+1 entries in vector (n+1 NULLs)

