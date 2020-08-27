#include <iostream>

using namespace std;

int isPal(string str, int s , int e ){
	
	if(s==e) 
	{return 1;} //for odd
	if(s>e) 
	{return 1;} // for even
	if(str[s] != str[e])
	{
		return 0;
	}
	
	return isPal(str,s+1,e-1);
	
	
}

int main(){
	string str = "aabbaak";
	int s = 0;
	int e = (str.length() - 1);
	isPal(str,s,e);
}
