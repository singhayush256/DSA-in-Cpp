#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    if (isSorted(arr, n)) {
        cout << "Array is sorted in ascending order." << endl;
    } else {
        cout << "Array is NOT sorted." << endl;
    }

    return 0;
}