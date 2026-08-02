#include <iostream>
using namespace std;

int main() {
    int x, n;
    long long ans = 1;

    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter power (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        ans = ans * x;
    }

    cout << x << " raised to power " << n << " is: " << ans << endl;
    return 0;
}