#include<bits/stdc++.h>

using namespace std;

int WindowSliding(int arr[], int k, int n)
{
	int res = 0;
	int max_sum = INT_MIN;
	for (int i =0; i+k-1<n; i++)
	{
		int sum = 0;
		for(int j =0; j<k ; j++)
		{
			sum = sum+arr[i+j];	
		}
	max_sum = max(sum,max_sum);	
	}
	return max_sum;
}

int main()
{
	int arr[] = {2,4,6,40};
	int k = 2;
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int m = WindowSliding(arr,k,n);
	cout<<m;
}
