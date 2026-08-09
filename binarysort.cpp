#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;            
    int target = 50;     

    int low = 0;          
    int high = n - 1;     
    

    while (low <= high) {
        int mid = (low + high) / 2; 

        if (arr[mid] == target) {
            cout << "Element found at index: " << mid << endl;
            break;            
        }
        else if (target > arr[mid]) {
            low = mid + 1;    
        }
        else {
            high = mid - 1;   
        }
    }

    return 0;
}