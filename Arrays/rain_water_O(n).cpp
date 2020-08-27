#include<bits/stdc++.h>

using namespace std;

void getWater(int arr, int n)
{
	int res = 0;
	int lmax[n];
	int rmax[n];
	lmax[0] = 5;
	for(int i = 1; i<n; i++ )
	{
		lmax[i] = max(lmax[i],arr[i-1]);
	}
	rmax[n-1] = arr[n-1]
	for(int i = n-2; i>=0; i-- )
	{
		rmax[i] = max(rmax[i+1],arr[i]);
	}
	for(int i = 0; i<n; i++)
	{
		cout<<rmax[i]<<" "<<endl;
		cout<<lmax[i]<<" "<<endl;
	}
	
}

int main()
{
	int arr[] = {5,0,6,2,3};
	int n = sizeof(arr)/sizeof(arr[0]);
 getWater(arr, n);
	//cout<<m;
}
