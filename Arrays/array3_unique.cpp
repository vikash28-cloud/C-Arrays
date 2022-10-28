#include<iostream>
using namespace std;
int unique(int,int);

int unique(int arr[5])
{
    int ans =0;
    for (int i = 0; i < 5; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main()
{
    int a;
    
    int arr[5]= {3,2,2,3,9};

    a=unique(arr);
    cout<<a;
}