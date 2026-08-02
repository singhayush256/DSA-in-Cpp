#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 6, 7, 5};
    int size = 6;

    int maxVal = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << "Largest element: " << maxVal << endl;
    return 0;
}