#include<bits/stdc++.h>

using namespace std;

int maxCircularSum(int arr[], int n)
{	
	int res = arr[0];
	for(int i =0; i<n; i++)
	{
		int curr_sum = arr[i];
		int curr_max = arr[i];
		for(int j = 1; j<n; j++)
		{
			int index = (i+j)%n;
			curr_sum = curr_sum+arr[index];
			curr_max = max(curr_sum, curr_max);
		}
		res = max(curr_max, res);
	}
	return res;
}

int main()
{
	int arr[] = {5,-21,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int m = maxCircularSum(arr,n);
	cout<<m;
}
