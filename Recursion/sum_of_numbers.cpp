#include <iostream>

using namespace std;

int sum( int n)
{
	if (n< 10) return n;
	return(sum(n/10) + n%10);
}

int main(){
	int i = 253;
	cout<<sum(i);
}
