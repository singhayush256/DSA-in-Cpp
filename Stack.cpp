#include<iostream>
using namespace std;
int stack[10];
int top = -1;

void push(int value){
    if(top == 9){
        cout << "Stack Overflow" << endl;
    }
    else{
        top++;
        stack[top] = value;
        cout << "Pushed: " << value << endl;
    }
}
    void pop(){
        if(top == -1){
            cout << "Stack Underflow" << endl;
        }
        else{
            cout << "Popped: " << stack[top] << endl;
            top--;
        }
    }
    void peek(){
        if(top == -1){
            cout << "Stack is Empty" << endl;
        }
        else{
            cout << "Top Element: " << stack[top] << endl;
        }
    }
    void display(){
        if(top == -1){
            cout << "Stack is Empty" << endl;
        }
        else{
            cout << "Stack Elements: ";
            for(int i=top; i>=0; i--){
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }
    int main()
{
    int n, x;

    cout << "How many elements do you want to push? ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> x;
        push(x);
    }

    display();

    peek();

    pop();

    display();

    return 0;
}