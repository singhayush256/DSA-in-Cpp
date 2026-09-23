#include<iostream>
using namespace std;

int printarray(int arr[], int size, int index = 0) {
    if (index == size) {
        return 0;
    }
    cout << arr[index] << " ";
    return printarray(arr, size, index + 1);
}