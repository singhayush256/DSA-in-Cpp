#include<iostream>
using namespace std;
int main(){
    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;

    int matrix[rows][columns];
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
       int sum = 0;
        for (int j = 0; j < columns; j++) {
            sum += matrix[i][j];
        }
        cout << "Sum of all elements of row " << i << ": " << sum << endl;
    }

    return 0;
}