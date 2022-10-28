#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {10,20,30,40,50};
    int n=5;
    int pos;
    cout<<"enter the position of element: ";
    cin>>pos;
    pos =pos-1;
    for (int i = pos; i <n; i++)
    {
        
        arr[i] = arr[i+1];
    }
    arr[n-1] = 0;
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    
}