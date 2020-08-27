#include<iostream>

using namespace std;

bool isSorted(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
	
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
				return false;
		}
	}
			
	
	return true;	
}

int main()
{
	int arr[] = {1,3,4,5,6,};
	int n = 6;
	cout<<isSorted(arr,n);
}
