//GCD

#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}

int main()
{	
	int a =12,b=56;
	cout<<"GCD of "<<a<<" and "<<b<<" are: "<<gcd(a,b);
}
