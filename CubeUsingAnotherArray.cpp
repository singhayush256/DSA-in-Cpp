#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int cubeArr[5];

    for (int i = 0; i < n; i++) {
        cubeArr[i] = arr[i] * arr[i] * arr[i];
    }

    cout << "Cubed Array: ";
    for (int i = 0; i < n; i++) {
        cout << cubeArr[i] << " ";
    }
    cout << endl;

    return 0;
}