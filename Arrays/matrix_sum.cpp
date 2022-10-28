#include<iostream>
using namespace std;

void sum(int m1[100][100],int m2[100][100],int m3[100][100],int r,int c)
{
    int i,j;
   
    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            m3[i][j] = m1[i][j]+m2[i][j];
        }
        
    }

    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout<<m3[i][j]<<" ";
        }
        cout<<endl;
    }

}



int main()
{
    int m1[100][100],m2[100][100],m3[100][100];
    int r,c,i,j;
    // --------------------------matrix 1-----------------------------//

    cout<<"Rows = ";
    cin>>r;
    cout<<"Column = ";
    cin>>c;



    cout<<"matrix 1: "<<endl;
    
    cout<<"enter the elements of matrix 1: "<<endl;
    for (i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            cin>>m1[i][j];
        }
    }
    cout<<"matrix 1: "<<endl;
    for (i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;

    // --------------------------matrix 2-----------------------------//
    cout<<"matrix 2: "<<endl;

    cout<<"enter the elements of matrix 2: "<<endl;
    for (i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            cin>>m2[i][j];
        }
    }

    cout<<"matrix 2: "<<endl;
    for (i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
        
    }

    cout<<endl<<"the sum of the matrix is : "<<endl;
    sum(m1,m2,m3,r,c);    
}


