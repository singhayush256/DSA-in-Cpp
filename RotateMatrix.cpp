#include<iostream>
using namespace std;
int main(){
    int row, columns;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> columns;

    int matrix[row][columns];
    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < columns; j++){
            cin >> matrix[i][j];
        }
    }
    int rotated[columns][row];
    for (int i=0; i < row; i++){
        for (int j=0; j < columns; j++){
            rotated[j][row-1-i] = matrix[i][j];
        }
    }
    cout << "The rotated matrix is:" << endl;
    for (int i=0; i < columns; i++){
        for (int j=0; j < row; j++){
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}