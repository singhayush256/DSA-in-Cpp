#include <iostream>
using namespace std;

bool searchMatrix(int matrix[][100], int rows, int cols, int target) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target) {
                cout << "Element found at position: (" << i << ", " << j << ")" << endl;
                return true;
            }
        }
    }
    return false; 
}

int main() {
    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;

    int matrix[100][100];  

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    int targetNumber;
    cout << "Enter the number you want to search: ";
    cin >> targetNumber;

    bool found = searchMatrix(matrix, rows, columns, targetNumber);

    if (found == false) {
        cout << "Element not found in the matrix." << endl;
    }

    return 0;
}
