#include<iostream>

using namespace std;

int main()
{
	int arr[]={1,2,3,4,5};
	int n= 5;
	
	for(int i =0; i<n; i ++)
	{
		int temp = arr[0];
		arr[i]=arr[i+2];
		arr[i+2] = temp;
	}
	for(int i =0; i<n; i ++)
	{
		cout<<arr[i]<<" ";
	}
}
