#include<iostream>
using namespace std;
void printnumbers(int n) {
    int i;
    for(i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << i << endl;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printnumbers(n);
    cout << endl;
    return 0;
}