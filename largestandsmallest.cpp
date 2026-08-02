#include <iostream>
using namespace std;

int main() {
    int num, rem;

    cout << "Enter a number: ";
    cin >> num;

    // Initialize with first digit or extreme values
    int largest = 0;
    int smallest = 9;

    int temp = num; 

    while (temp > 0) {
        rem = temp % 10;

        if (rem > largest) {
            largest = rem;
        }

        if (rem < smallest) {
            smallest = rem;
        }

        temp = temp / 10;
    }

    cout << "Largest digit: " << largest << endl;
    cout << "Smallest digit: " << smallest << endl;

    return 0;
}