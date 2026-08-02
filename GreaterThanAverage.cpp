#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    double avg = sum / n;
    cout << "Average = " << avg << endl;

    cout << "Elements greater than average: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}