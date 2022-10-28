#include<iostream>
using namespace std;
int main()
{
    int arr1[10]={1,2,3,4,7,8,3,2,9,1};
    int sum = 5;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (arr1[i]+arr1[j]==5)
            {
                cout<<arr1[i]<<" "<<arr1[j]<<endl;
                
            }
            
        }
        
    }
    
}