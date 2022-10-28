#include<iostream>
using namespace std;
int main()
{
    int arr1[100] = {2,3,4,6,7,8};
    int n= 6;
    int arr2[100] = {0,1,5,12,14};
    int m=5;
    int arr3[100];
    
    int i=0,j=0,k=0;
    while (i<n&&j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;

        }
    
    }
    while (i<n)
    {
        arr3[k] =arr1[i];
        k++;
        i++;
    }
    while(j<m)
    {
        arr3[k] =arr2[j];
        j++;
        k++;

    }
    
    for (int i = 0; i <n+m; i++)
    {
        cout<<arr3[i]<<" ";
    }cout<<endl;
    
}