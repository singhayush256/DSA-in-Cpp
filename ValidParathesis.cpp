#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int n=0;
    cout << "Enter the Element: ";
    string s[n];
    for(int i=0; i<n; i++){
        getline(cin,s);
    }
    stack <int> st(n);
    for(int i=0; i<n; i++){
        st.push(s[i]);
    }
}