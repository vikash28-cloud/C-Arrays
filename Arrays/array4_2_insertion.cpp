#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {10,20,30,40};
    int n = 6;
    int pos1 = 2;
    int pos2 =3;

    int element1 = 100;
    int element2 =200;

    for (int i =n-1 ; i>=pos1; i--)
    {
        arr[i-1] = arr[i-2];       //i=3;
        arr[i] = arr[i-1];
    }
    arr[pos1] = element1;

    for (int i =n-3 ; i>=pos2; i--)
    {
        arr[i+2] = arr[i+1];       //i=3;
        arr[i+1] = arr[i];
    }
    arr[pos2] = element2;


    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    

}