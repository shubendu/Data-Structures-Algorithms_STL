//trailing zeros in factorial
//T.C = O(n)

#include<iostream>

using namespace std;


int countzeros(int n)
{
	int fact = 1;
	for(int i=2;i<=n;i++)
	{
		fact = fact*i;
	}
	cout<<"factorial is: "<<fact<<endl;
	
	int res = 0;
	while(fact %10 ==0)
	{
		res++;
		fact = fact/10;
	}
	cout<<"trailing zeros are : ";
	return res;
}

int main()
{
	int n = 10;
	cout<<countzeros(n);
}
