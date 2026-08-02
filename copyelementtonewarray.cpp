#include <iostream>
using namespace std;

int main() {
    int source[] = {5, 10, 15, 20, 25};
    int n = 5;
    int destination[5];

    // Copying elements
    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }

    cout << "Copied Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << destination[i] << " ";
    }
    cout << endl;

    return 0;
}