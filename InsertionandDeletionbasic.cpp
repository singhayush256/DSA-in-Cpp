#include <iostream>
using namespace std;

int main() {
    int arr[50], n, choice, element, pos;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "1. Insert\n2. Delete\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter element to insert: ";
        cin >> element;
        cout << "Enter index position: ";
        cin >> pos;

        for (int i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = element;
        n++;
    } 
    else if (choice == 2) {
        cout << "Enter index position to delete: ";
        cin >> pos;

        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }

    cout << "Updated Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}