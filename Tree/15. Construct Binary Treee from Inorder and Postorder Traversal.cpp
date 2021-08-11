#include <iostream>
using namespace std;
int prefix=0;
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


Node* Tree(int in[],int pre[],int is,int ie)
{
	if(is>ie)
		return NULL;
	Node* root=new Node(pre[prefix]);
	prefix+=1;
	int inIndex;
	for(int i=is;i<=ie;i++)
	{
		if(root->data==in[i])
		{
			inIndex=i;
			break;
		}
	}
	root->left=Tree(in,pre,is,inIndex-1);
	root->right=Tree(in,pre,inIndex+1,ie);
	return root;
}

void PreOrder(Node* root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" ";
		PreOrder(root->left);
		PreOrder(root->right);
	}
}

int main()
{
	int in[]={20,10,40,30,50};
	int pre[]={10,20,30,40,50};
	Node* root=Tree(in,pre,0,4);
	PreOrder(root);
	return 0;
}

//Time Complexity: O(n^2)
//Auxiliary Space: O(h)
