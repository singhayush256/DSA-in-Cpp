#include <iostream>
using namespace std;

int main() {
    int num, rem, sum = 0, prod = 1;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;

    while (temp > 0) {
        rem = temp % 10;
        sum = sum + rem;
        prod = prod * rem;
        temp = temp / 10;
    }

    if (sum == prod) {
        cout << num << " is a Spy number." << endl;
    } else {
        cout << num << " is NOT a Spy number." << endl;
    }

    return 0;
}