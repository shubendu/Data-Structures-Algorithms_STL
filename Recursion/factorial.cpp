#include <iostream>

using namespace std;

//with recursive tail

int fact(int n, int k =1){
	if (n==0) 
	{
		return k;
	}
	else
	{
		return fact(n-1,k*n);
	}
	
}

/*
//without recursive tail
int fact(int n)
{
	if (n==0) return 1;
	return (n *fact(n-1));
}
*/

int main()
{
	
	cout<<fact(3);
}
