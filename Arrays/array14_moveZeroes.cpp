#include<iostream>
using namespace std;
int main()
{
    int arr[100]  ={2,0,1,3,0,0};
    int n= 6;
    int i=0;
    int j=0;
    while(j<n)
    {
        if (arr[j]!=0)
        {
            swap(arr[i],arr[j]);
            
            i++;
        }
        j++;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";;
    }
    
}