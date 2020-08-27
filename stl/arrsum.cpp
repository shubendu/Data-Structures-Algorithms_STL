#include<iostream>
using namespace std;

int summ(int a[], int limit)
{
	int result =0;
	for(int i=0;i<limit;i++)
		result = result +a[i];
	return result;	
}


int main()
{
	int arr[100],n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter the elements of array "<<endl;
	for(int i =0;i<n;i++)
		cin>>arr[i];
	int final_result = summ(arr,n);
	cout<<final_result;

}
