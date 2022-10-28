#include<iostream>
using namespace std;
int main()
{
    int arr1[100][100],arr2[100][100];

    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr1[i][j];
        }
        
    }
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }


    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr2[i][j];
        }
        
    }
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }


    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<arr2[i][j]*arr1[i][j]<<" ";
        }
        cout<<endl;
    }





    
    
}