#include<bits/stdc++.h>

using namespace std;

int maxNormalSum(int arr[], int n)
{	
	int res = arr[0];
	int maxend = arr[0];
	for(int i =1; i<n; i++)
	{
		maxend = max(maxend+arr[i], arr[i]);
		res = max(maxend,res);
	
	}
	return res;
}

int OverallSum(int arr[], int n)
{
	int max_normal = maxNormalSum(arr,n);
	if (max_normal<0)
		return max_normal;
	int arr_sum = 0;
	for(int i = 0; i<n; i++)
	{
		arr_sum = arr_sum+ arr[i];
		arr[i] = -arr[i];
	}
	
	int max_circular = arr_sum + maxNormalSum(arr,n);
	return max(max_circular, max_normal);
}

int main()
{
	int arr[] = {5,-21,-3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int m = OverallSum(arr,n);
	cout<<m;
}
