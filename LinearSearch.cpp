#include <iostream>
using namespace std;

int main() {
    int arr[] = {15, 8, 22, 10, 5};
    int n = 5;
    int key = 10;
    int foundIndex = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        cout << "Element " << key << " found at index " << foundIndex << endl;
    } else {
        cout << "Element " << key << " not found." << endl;
    }

    return 0;
}