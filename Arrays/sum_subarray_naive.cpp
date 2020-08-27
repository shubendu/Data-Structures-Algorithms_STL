#include<bits/stdc++.h>

using namespace std;

int maxSum(int arr[], int n)
{
	int res = arr[0];
	for(int i =0; i<n; i++)
	{
		int curr = 0;
		for(int j=i; j<n; j++)
		{
			curr = curr + arr[j];
			//cout<<"this is curr :"<<curr<<endl;
			res = max(res,curr);
			//cout<<"this is res :"<<res<<endl;
		}
		//cout<<"==================="<<endl;
		
	}
	return res;
}

int main()
{
	int arr[] = {3,3,-9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int m = maxSum(arr,n);
	cout<<"ans"<<m;
}
