#include<iostream>

using namespace std;

void RotatebyOne(int arr[], int n)
{
	int temp = arr[0];
	for (int i =0; i<n; i++)
	{
		arr[i-1] = arr[i];
	}
	arr[n-1] = temp;
}

void LeftRotatebyD(int arr[], int n , int d)
{
	for(int i =0; i<d; i++)
	{
		RotatebyOne(arr,n);
	}
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int d = 2;
	LeftRotatebyD(arr,n,d);
	
	for(int i =0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}
