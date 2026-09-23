#include<iostream>
#include<stack>
#include<vector>

using namespace std;
int main(){
    int n = 0, arr[100];
    cout << "Number of Element";
    cin >> n;
    stack <int> st(n);

    for(int i = 0; i < n; i++){
        cout << "Enter the element" << i << " ";
        st.push(arr[i]);
    }
    for(int i=0; i<n; i++){
        arr[i] = st.top();
        st.pop();
    }
    for(int i=0 ; i<n; i++){
        cout << arr[i];
    }
    return 0;
 
}
