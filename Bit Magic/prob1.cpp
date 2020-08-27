//given an array 1 to 1+1 range, find one missing number
#include <iostream>

using namespace std;

int main(){
	int arr[]= {1,4,3};
	int res = 0;
	res = (1^2^3^4)^(arr[0]^arr[1]^arr[2]);
	cout<< res;
}
