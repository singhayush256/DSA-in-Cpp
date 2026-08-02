#include <iostream>
using namespace std;

int main() {
    int num, original, sum = 0, rem;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num > 0) {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if (original == sum) {
        cout << original << " is an Armstrong number." << endl;
    } else {
        cout << original << " is NOT an Armstrong number." << endl;
    }

    return 0;
}