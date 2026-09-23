#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

Node *reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next; 
        current->next = prev; 
        prev = current;       
        current = next;       
    }
    return prev; 
}
void printList(Node *node) {
    while (node != nullptr) {
        cout << node->data;
        if (node->next)
            cout << " -> ";
        node = node->next;
    }
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    cout << "Orginal Linked List: ";
    printList(head);
    head = reverseList(head);
    cout << "\nReversed Linked List: ";
    printList(head);
    return 0;
}
