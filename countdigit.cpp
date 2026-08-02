#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        count = 1;
    } else {
        while (num > 0) {
            count++;
            num = num / 10;
        }
    }

    cout << "Total digits: " << count << endl;

    return 0;
}