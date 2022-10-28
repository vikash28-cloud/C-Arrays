#include<iostream>
using namespace std;
int main()
{
    int element;
    int num=0;
    int arr[10] = {1,2,3,4,5,6,7,8,9,4};
    for (int i = 0; i < 10; i++)
    {
        element = arr[i];

        for (int j = i+1; j < 10; j++)
        {
            if (element==arr[j])
            {
                num = element;
            }
        }
        
    }
    cout<<num;
}