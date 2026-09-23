#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "abc";
    string s2 = "pqr";
    string result = "";
    int n1 = s1.length();
    int n2 = s2.length();
    int i = 0, j = 0;

    while (i < n1 || j < n2) {
        if (i < n1) {
            result += s1[i];
            i++;
        }
        if (j < n2) {
            result += s2[j];
            j++;
        }
    }

    cout << result << endl;
    return 0;
}
