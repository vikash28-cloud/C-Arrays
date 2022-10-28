#include<iostream>
using namespace std;
int main()
{
    int array[5] = {10,20,30,40};
    int n=5;
    int pos;
    cout<<"enter the position for insertion: ";
    cin>>pos;
    for(int i=n-1;i>=pos;i--)
    {
        array[i] = array[i-1];
    }
    int a;

    cout<<"enter the element for positon "<<pos<<": ";
    cin>>a;

    array[pos-1] =a;

    for (int i = 0; i < 5; i++)
    {
        cout<<array[i]<<" ";
    }
    

}
