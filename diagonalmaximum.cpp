#include<iostream>
#include<climits>
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

   int a = INT_MIN;
   for(int i = 0; i < rows; i++){
       for(int j = 0; j < columns; j++){
           if(i == j){
               if(matrix[i][j] > a){
                   a = matrix[i][j];
               }
           }
       }
   }
   cout << "Maximum element in the diagonal: " << a << endl;

    return 0;
}