#include<iostream>
using namespace std;
int main()
{
    int flag=0;
    int arr[5] = {10,20,40,30,50};
    int n=5;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1] || arr[i]>arr[i+1])
        {
            
            if(arr[i]>arr[i+1])
            {
                flag= 0;
                break;
            }
            flag =1;
        }
        else if(arr[i]>arr[i+1])
        {
            
            if(arr[i]<arr[i+1]){
                flag=0;
                break;
            }
            flag=1;
        }
       
    }

    if(flag==1)
    {
        cout<<"sorted"<<endl;
    }
    else
    {
        cout<<"unsorted";
    }
}
