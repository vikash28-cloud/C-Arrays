/* arrays are sorted in non decreasing order*/

#include<iostream>
using namespace std;
int main()
{
    int arr1[100];
    int arr2[100];
    int inter[100];
    int n,m;

    int i=0,j=0,k=0;


    cout<<"enter the size of first array: ";
    cin>>n;
    cout<<"enter the elements of first array: "<<endl;
    for (int  i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }

    cout<<"enter the size of second array: ";
    cin>>m;
    cout<<"enter the elements of second array: "<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    
   
   while (i<n &&  j<m)
   {
       if (arr1[i] == arr2[j])
       {
           inter[k] = arr1[i];
           i++;
           j++;
           k++;
       }
       else if(arr1[i]<arr2[j])
       {
           i++;
       }
       else if(arr1[i]>arr2[j])
       {
           j++;
       }
   }
   
   cout<<"elements after instersection: ";
   for(int i=0; i<k; i++)
   {
       cout<<inter[i]<<" ";
   }
    
}