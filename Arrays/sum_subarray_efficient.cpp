#include<bits/stdc++.h>

using namespace std;

int maxSum(int arr[], int n)
{
	int res = arr[0];
	int maxEnding = arr[0];
	for(int i =1; i<n; i++)
	{
		maxEnding = max(maxEnding+arr[i],arr[i]);
		
		res = max(maxEnding,res);
		
	}
	return res;
}

int main()
{
	int arr[] = {3,3,-4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int m = maxSum(arr,n);
	cout<<m;
}
