#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s1, s2;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        s1.push(x);
    }
    cout << "Original Stack Elements: " << x << endl;

    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    cout << "Reversed Stack Elements: ";

    while(!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }

    return 0;
}