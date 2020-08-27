#include<bits/stdc++.h>

using namespace std;

int maxConsecutiveOnes(int arr[], int n)
{
	int res = 0;
	int curr = 0;
	for(int i=0;i<n; i++)
	{
		if(arr[i] == 0)
			curr = 0;
		else
			curr++;
			res = max(res,curr);
	}
	return res;
}

int main()
{
	int arr[] = {0,1,0,1,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int m = maxConsecutiveOnes(arr,n);
	cout<<m;
}
