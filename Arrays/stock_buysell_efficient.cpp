#include<bits/stdc++.h>

using namespace std;

int maxProfit(int arr[], int n)
{
	int profit = 0;
	for(int i = 1; i <n ; i++)
	{
		if(arr[i] > arr[i-1])
			profit = profit + (arr[i]-arr[i-1]);
	}
	return profit;
}

int main()
{
	int arr[] = {1,5,3,8,12};
	int n = 5;
	int m = maxProfit(arr,n);
	cout<<m;
}
