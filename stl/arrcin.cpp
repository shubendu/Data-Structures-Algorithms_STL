#include<iostream>
using namespace std;

int main()
{
	int arr[100][100];
	int i,j,n,k;
	cout<<"enter the size of matrices"<<endl;
	cin>>n>>k;
	cout<<"enter the elements"<<endl;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			cout<<arr[i][j]<< " ";
		}
		cout<<endl;
	}
}
