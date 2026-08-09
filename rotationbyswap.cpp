#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int k = 2; 

    k = k % n;

    
    for (int rotation = 0; rotation < k; rotation++) {
 
        for (int i = 0; i < n - 1; i++) {
            int temp = arr[i];
            arr[i] = arr[n - 1];
            arr[n - 1] = temp;
        }
    }

    cout << "After Right Rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}