#include<iostream>
using namespace std;
int main()
{
    int arr[10] ={1,2,3,4,5};
    int n=5;
    int temp[10];
    int k=0;
    int d=2;
    for (int i = d; i <n; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
}