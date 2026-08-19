#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cout << "Enter rows and columns: ";
    cin >> rows >> columns;

    int matrix[100][100];
    int rotated[100][100];

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            rotated[j][rows - 1 - i] = matrix[i][j];
        }
    }

    cout << "\nMatrix after 90 degree clockwise rotation:" << endl;
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
