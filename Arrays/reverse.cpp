#include <bits/stdc++.h>

using namespace std;

int reverse(int ar[], int n)
{
	int high = n-1;
	int low= 0;
	while(low<high)
	{
		int temp = ar[low];
		ar[low] = ar[high];
		ar[high] = temp;
		high--;
		low++;
	}
}

int main(){
	int ar[] = {1,2,3,4,5};
	int n = sizeof(ar)/sizeof(ar[0]);
	reverse(ar,n);
	cout<<"Reverse array"<<endl;
	
	for(int i =0; i<n; i++)
		cout<<ar[i] <<" ";
	
}

