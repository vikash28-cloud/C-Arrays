#include <iostream>
using namespace std;
bool ispresent(int A,int arr[],int n=7)
{
    for(int i=0;i<n;i++)
    {
	    if(arr[i]==A)
	   {
	       return true;
	       break;
	   }
    }
    return false;
}



int main() {
    
    int A=2,B=5;
    int arr[7] = {1,4,2,5,7,8,3};
    int n;
    
    bool x=0;
	while(A<=B)
	{
        if(ispresent(A,arr,n))
	    {
	        x=1;
	        A++;
	    }
    }
	if(x==1)
    {
        cout<<"yes";
    }
	else
	{
	   cout<<"no";
    }
    
    

    return 0;
}