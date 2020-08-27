#include <bits/stdc++.h>

using namespace std;

int countsubset(int ar[],int n, int sum)
{
	if(n == 0) 
	{
		return (sum==0) ? 1:0;
	}
	return countsubset(ar,n-1,sum) + countsubset(ar,n-1,sum-ar[n-1]);
}

int main(){
	int ar[] = {1,2,3};
	int sum = 3;
	int n = 3;

	cout<<countsubset(ar,n,sum);
}
