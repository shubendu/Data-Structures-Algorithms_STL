#include <bits/stdc++.h>
using namespace std;

unsigned int countset( unsigned int n)
{
	unsigned int count=0;
	int l=0;
	while(n>0)
	{
		n = (n & (n-1));
		count++;
		l++;
	}
	cout<<"total number of loops runs: "<<l<<endl;
	return count;
}

int main(){
	int n = 5;
	cout<<"total number of set bits " <<countset(n);
	return 0;
}
