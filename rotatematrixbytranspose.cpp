#include<iostream>
using namespace std;
int main(){
    int rows, columns;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> columns;

    int matrix[100][100];
    int result[100][100];
    int rotated[100][100];

    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin >> matrix[i][j];
        }
    }
    cout << "\nMatrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
         result[j][i] = matrix[i][j];
        }
    }
       cout << "\nTransposed Matrix:" << endl;
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
         rotated[i][columns - 1-j] = result[i][j];
        }
    }
    cout << "The rotated matrix is:" << endl;
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    } 
    return 0;
}