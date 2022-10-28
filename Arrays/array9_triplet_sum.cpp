#include<iostream>
using namespace std;
int main()
{
    int arr1[50]={1,2,3,4,5,7};
    int sum=12;
    for (int i = 0; i < 6; i++)
    {
        for (int j=i+1; j < 6; j++)
        {
            for (int k = j+1; k < 6; k++)
            {
                if (arr1[i]+arr1[j]+arr1[k]==sum)
                {
                    cout<<arr1[i]<<" "<<arr1[j]<<" "<<arr1[k]<<endl;
                }
                
            }
            
        }
        
    }
    return 0;
    
}
