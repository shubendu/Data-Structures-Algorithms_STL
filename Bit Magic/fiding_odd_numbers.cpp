#include <iostream>
// program to find the only one odd numbers in array

using namespace std;

//O(n)
int main(){
	int arr[]= {5,5,5,5,4,4,6};
	int res = 0;
	for(int i=0; i<7; i++)
	{
		res = res ^ arr[i];
	}
	cout<<res;
}

/*
//O(n2)
int main(){

	int arr[]= {5,5,5,5,4,4,6};
	
	for(int i = 0; i<7 ; i++)
	{	
		int count = 0;
		for(int j=0 ; j<7; j++)
		{
			if(arr[j]==arr[i])
			{
				count++;
			}	 
		}
		if (count%2!=0)
		{
			cout<<arr[i];
		}
	}
}

*/
