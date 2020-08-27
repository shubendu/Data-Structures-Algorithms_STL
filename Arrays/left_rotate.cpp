#include<iostream>

using namespace std;

int main(){
	int ar[] = {1,2,3,4,5};
	int n = sizeof(ar)/sizeof(ar[0]);
	
	for(int i = 1; i <n ;i++)
	{
		ar[n-1] = ar[0];
		ar[i] = ar[i+1];
	}
	
	for(int i = 0; i <n ;i++)
	{
		cout<<ar[i]<<" ";
	}
	
	
	
}
