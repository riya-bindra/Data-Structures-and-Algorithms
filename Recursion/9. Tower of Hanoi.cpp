#include <iostream>
using namespace std;

void TowerofHanoi(int n,char A, char B, char C)
{
	if(n==1)
	{
		cout<<"Move disk 1 from "<<A<<" to "<<C<<endl;
		return;
	}
		
	TowerofHanoi(n-1,A,C,B);
	cout<<"Move disk "<<n<<" from "<<A<<" to "<<C<<endl;
	TowerofHanoi(n-1,B,A,C);
}

int main()
{
	TowerofHanoi(2,'A','B','C');
	cout<<endl<<endl;
	TowerofHanoi(3,'A','B','C');
	cout<<endl<<endl;
	TowerofHanoi(4,'A','B','C');
	cout<<endl<<endl;
	return 0;
}

//Time Complexity: Theta(2^n)
//T(n)=2T(n-1)+c
//Auxiliary Space: O(n)
