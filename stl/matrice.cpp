// C++ code to linearly search x in arr[]. If x 
// is present then return its location, otherwise 
// return -1 
  
#include <iostream> 
using namespace std; 
  
  
int main() 
{ 	
	int arr[2][3];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
 
} 
