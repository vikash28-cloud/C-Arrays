#include<iostream>
using namespace std;
int main()
{
    int arr1[100] = {2,4,1,0,4,10};
    int arr2[100] = {10,2,1,6,0,10};
    int inter[50];
    int k=0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <6; j++)
        {
            if(arr1[i]==arr2[j])
            {
                inter[k] = arr1[i];
                k++;
                arr1[i] = 1000;
                arr2[j] = 100;
            }
        }
        
    }
    for (int i = 0; i < k; i++)
    {
        cout<<inter[i]<<" ";
    }

    
    return 0;
}