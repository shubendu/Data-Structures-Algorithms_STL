#include<bits/stdc++.h>

using namespace std;

int maxProfit(int arr[], int start, int end)
{
	if (start >= end)
		return 0;
	int profit = 0;
	for(int i = start; i<end; i++)
	{
		for(int j = i+1; j<=end;j++)
		{
			int curr_profit = (arr[j]-arr[i]) + maxProfit(arr,start,i-1) + maxProfit(arr,j+1,end);
			profit = max(profit,curr_profit);
		}
	}
	return profit;
}


int main()
{
	int arr[] = {1,5,3,8,12};
	int start = 0;
	int end = 4;
	int m = maxProfit(arr,start,end);
	cout<<m;
}
