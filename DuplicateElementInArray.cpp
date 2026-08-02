#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 3, 2, 8, 4, 5, 4};
    int n = 8;

    cout << "Duplicate elements: ";
    for (int i = 0; i < n; i++) {
        // Skip if we already checked this element before
        bool alreadyChecked = false;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyChecked = true;
                break;
            }
        }
        if (alreadyChecked) continue;

        // Look for matches ahead
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    cout << endl;

    return 0;
}