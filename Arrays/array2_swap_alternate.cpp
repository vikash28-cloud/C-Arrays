#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {10,20,30,40,50,60,70,80,90,100},temp=0;
    for (int i = 0; i < 10; i+=2)
    {
        if(i+1<10)
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1]  =temp;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
     
    
}