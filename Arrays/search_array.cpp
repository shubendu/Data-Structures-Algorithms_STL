#include <bits/stdc++.h>

using namespace std;

int insert(int ar[], int n, int x, int pos)
{
	int idx = pos-1;
	
	for(int i = n-1; i>=idx; i--)
	{
		ar[i+1] = ar[i];
	}
	ar[idx] = x;
	return n+1;
}



int main(){
	int ar[5] = {5,10,20,8};
	int n =5;
	int pos = 2;
	int x = 7;
	cout<<"Before inserting number array is: "<<endl;
	for(int i =0; i<n-1; i++)
	{
		cout<<ar[i]<<" ";
	}

	insert(ar,n,x,pos);
	cout<<"\nAfter inserting number array is: "<<endl;
	for(int i =0; i<n; i++)
	{
		cout<<ar[i]<<" ";
	}

}
