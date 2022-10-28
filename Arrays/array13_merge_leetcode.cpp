#include<iostream>
using namespace std;
int main()
{
    int arr1[100] = {2,3,4,6,7,8};
    int n= 6;
    int arr2[100] = {0,1,5,12,14};
    int m=5;
    int arr3[100];
    
    int i=0,j=0;
    while (i<n&&j<m)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
            
        }
        else
        {
            arr1[i] = arr2[j];
            j++;
        

        }
    
    }
    while (i<n)
    {
        arr1[i] =arr1[i];   
        
        i++;
    }
    while(j<m)
    {
        arr1[i] =arr2[j];
        j++;
    

    }
    
    for (int v = 0; v <n+m; v++)
    {
        cout<<arr1[v]<<" ";
    }cout<<endl;
    
}