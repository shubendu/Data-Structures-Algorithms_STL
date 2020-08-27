#include<iostream>

using namespace std;

//with tail recursive

void fun( int n , int k =1){
	if (n<0) return;
	
	cout<<k<<" ";
	
	fun(n-1,k+1);
}


/*
//Without tail recursive
void fun( int n){
	
	if (n==0) return;
	fun(n-1);
	cout<<n;
}*/

int main(){
	fun(5);
}
