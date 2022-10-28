#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {11, 7, 3, 12, 4};

    int size = 5;
    int startIndex = 0, endIndex = size - 1;

    while (startIndex <= endIndex)
    {
        swap(arr[startIndex], arr[endIndex]);
        startIndex++;
        endIndex--;
    }
    cout << "After reverse the array is: " << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}