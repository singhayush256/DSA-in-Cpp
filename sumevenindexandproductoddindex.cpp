#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 6, 7, 5};
    int size = 6;

    int sumEvenIndex = 0;
    long long prodOddIndex = 1;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            sumEvenIndex = sumEvenIndex + arr[i];
        } else {
            prodOddIndex = prodOddIndex * arr[i];
        }
    }

    cout << "Sum of even indexed elements: " << sumEvenIndex << endl;
    cout << "Product of odd indexed elements: " << prodOddIndex << endl;

    return 0;
}