#include <iostream>
#include<math.h>

using namespace std;

void powerset( string str)
{
	int n = str.length();
	int powsize = pow(2,n);
	
	for(int counter = 0; counter < powsize; counter++)
	{
		for(int j = 0; j<n ; j++)
		{
			if ((counter & (1<<j)) != 0)
			cout<<str[j];
		}
		cout<<endl;
	}
}

int main(){
	string s = "abc";
	powerset(s);
}
