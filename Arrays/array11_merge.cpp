#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {11,7,3,12,4};
    int n =5;

    int arr2[3] = {2,4,6};
    int m =3;

    int arr3[10]; 
    int k = m+n;

    for (int i = 0; i <k ; i++)
    {
        arr3[i] =arr[i];
    }
    
    for (int i =n,j=0; i < k,j<m; i++,j++)
    {
        arr3[i] = arr2[j];
    }
    
    for (int i = 0; i < k; i++)
    {
        cout<<arr3[i]<<" ";
    }cout<<endl;


    cout<<"after sorting the merged array: "<<endl;
    
    for (int i = 0; i <k; i++)
    {
        int minIndex = i;

        for (int j = i+1; j<k; j++)
        {
            if(arr3[j]<arr3[minIndex])
            {
                minIndex = j;

            }
        }
        swap(arr3[i],arr3[minIndex]);
    }
    
    for (int i = 0; i < k; i++)
    {
        cout<<arr3[i]<<" ";
    }cout<<endl;

}