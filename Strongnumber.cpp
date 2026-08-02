#include <iostream>
using namespace std;

int main() {
    int num, original, rem, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num > 0) {
        rem = num % 10;

        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if (original == sum) {
        cout << original << " is a Strong number." << endl;
    } else {
        cout << original << " is NOT a Strong number." << endl;
    }

    return 0;
}