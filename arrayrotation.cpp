#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, i, temp;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    temp = arr[n - 1]; 
                 

    for (i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
   
    cout << "Array after right rotation: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}