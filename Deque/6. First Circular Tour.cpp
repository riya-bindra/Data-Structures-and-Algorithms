#include <iostream>
using namespace std;

int FirstCircularTour(int petrol[],int dist[],int n)
{
	int start=0,currPetrol=0,prevPetrol=0;
	for(int i=0;i<n;i++)
	{
		currPetrol+=petrol[i]-dist[i];
		if(currPetrol<0)
		{
			start=i+1;
			prevPetrol+=currPetrol;
			currPetrol=0;
		}
	}
	return (prevPetrol+currPetrol>=0)?(start+1):-1;
}

int main()
{
	int petrol[]={50,10,60,100};
	int dist[]={30,20,100,10};
	cout<<FirstCircularTour(petrol,dist,4)<<endl;
	int petrol2[]={4,8,7,4};
	int dist2[]={6,5,3,5};
	cout<<FirstCircularTour(petrol2,dist2,4)<<endl;
	int petrol3[]={8,9,4};
	int dist3[]={5,10,12};
	cout<<FirstCircularTour(petrol3,dist3,3)<<endl;	
	return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(1)
