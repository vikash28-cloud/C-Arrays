#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {2,1,4,3,8,6,4,9,3,10};
    int n,temp=0,i;

    cout<<"enter the element for search:  ";
    cin>>n;

    for (i = 0; i < 10; i++)
    {
        if (n==arr[i])
        {
            temp=1;
            break;
        }
        
    }
    if (temp==1)
    {
        cout<<"the element is present\nAt position "<<i+1;

    }
    else
    {
        cout<<"the element is not present";
    }
    

}