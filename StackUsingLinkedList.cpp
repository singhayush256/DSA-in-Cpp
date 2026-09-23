#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* top = NULL;

void push(int value)
{
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = top;

    top = newNode;
}

void pop()
{
    if(top == NULL)
    {
        cout << "Stack Underflow" << endl;
        return;
    }

    cout << "Deleted Element = " << top->data << endl;

    Node* temp = top;
    top = top->next;

    delete temp;
}

void peek()
{
    if(top == NULL)
    {
        cout << "Stack is Empty" << endl;
        return;
    }

    cout << "Top Element = " << top->data << endl;
}

void display()
{
    if(top == NULL)
    {
        cout << "Stack is Empty" << endl;
        return;
    }

    Node* temp = top;

    cout << "Stack Elements: ";

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    int n, x;

    cout << "How many elements do you want to push? ";
    cin >> n;

    for(int i = 1; i <= n; i++)
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