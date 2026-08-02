#include <iostream>
using namespace std;

int main() {
    int num, original;
    cout << "Enter a number: ";
    cin >> num;
    original = num;

    while (num != 1 && num != 4) { 
        int sum = 0;
        while (num > 0) {
            int rem = num % 10;
            sum = sum + (rem * rem);
            num = num / 10;
        }
        num = sum; 
    }

    if (num == 1) {
        cout << original << " is a Happy Number." << endl;
    } else {
        cout << original << " is NOT a Happy Number." << endl;
    }

    return 0;
}