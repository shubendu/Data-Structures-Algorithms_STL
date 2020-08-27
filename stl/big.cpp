// C++ code to linearly search x in arr[]. If x 
// is present then return its location, otherwise 
// return -1 
  
#include <iostream> 
using namespace std; 
  
  
int main() 
{ 	
    int a[]={49,79,36},big,index;
	int n = sizeof(a) / sizeof(a[0]);
	//int n = 6;
	big=a[0];
    for (int i = 0; i < n; i++)
    {
    	if(a[i]<big)
    	{
    		big = a[i];		
		}
		
	}
	cout<<big<<endl;
 
} 
