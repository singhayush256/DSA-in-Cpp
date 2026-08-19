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
    int left = 0, right = columns - 1;
    while (left < right) {
        for (int i = 0; i < rows; i++) {
                cout << matrix[i][right] << " ";
         }
          left++;
          right--;
    }
    int top = 0, bottom = rows - 1;
    while (top < bottom) {
        for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
         }
          bottom--;
          top++;
    }
    while (left < right) {
        for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
         }
          left++;
          right--;
    }
    while (bottom > top) {
        for (int i = left; i <= right; i++) {
                cout << matrix[top][i] << " ";
         }
          bottom--;
          top++;
    }
    while (left < right) {
        for (int i = top; i <= bottom; i++) {
                cout << matrix[i][right] << " ";
         }
          left++;
          right--;
    }
    while (top < bottom) {
        for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
         }
          bottom--;
          top++;
    }
    while (left < right) {
        for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
         }
          left++;
          right--;
    }
    return 0;

        



}