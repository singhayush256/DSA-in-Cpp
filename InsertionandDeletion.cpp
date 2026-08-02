#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5; // current size

    // Insert at start
    int valStart = 5;
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = valStart;
    n++;

    // Insert at rear (end)
    int valEnd = 60;
    arr[n] = valEnd;
    n++;

    // Insert at index 3
    int pos = 3, valPos = 25;
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = valPos;
    n++;

    cout << "Array after insertions: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // Delete from start
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    // Delete from rear
    n--;

    // Delete from index 2
    int delPos = 2;
    for (int i = delPos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "Array after deletions: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}