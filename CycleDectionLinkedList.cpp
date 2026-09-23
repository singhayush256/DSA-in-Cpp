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
void CircularLinkedList(Node* head) {
   if (head == nullptr) {
    return;
   }
   

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = head; 
}
void printCircularList(Node* head, int count) {
    if (head == nullptr) return;

    Node* temp = head;
    for (int i = 0; i < count; i++) {
        cout << temp->data;
        if (i < count - 1)
            cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    CircularLinkedList(head);

    cout << "Circular Linked List: ";
    printCircularList(head, 6); 

    return 0;
}