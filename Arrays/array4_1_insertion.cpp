#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {10,20,30,40};
    int n =5;
    int pos = 1;
    int element = 100, temp;

    temp = arr[pos];
    arr[pos] = element;
    arr[n-1] = temp;

    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    


}