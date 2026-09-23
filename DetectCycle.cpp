#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

bool detectCycle(Node* head) {
    if (head == nullptr || head->next == nullptr) return false;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true; 
        }
    }
    return false;
}

int findCycleStart(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) break;
    }

    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next; 
    }
    return slow->data;
}

int main() {
    int n;
    cout << "Number of nodes in Linked List: ";
    cin >> n;

    if (n <= 0) {
        cout << "Enter a valid number of nodes!" << endl;
        return 0;
    }

    Node* head = nullptr;
    Node* tail = nullptr;

   
    Node* nodesList[100];

    cout << "Enter data for each node: " << endl;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        
        Node* newNode = new Node(val);
        nodesList[i] = newNode;

        if (head == nullptr) {
            head = newNode; 
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;      
        }
    }

    char choice;
    cout << "Do you want to create a cycle in the linked list? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        int pos;
        cout << "Enter the position to create a cycle (0 to " << n-1 << "): ";
        cin >> pos;

        if (pos >= 0 && pos < n) {
            tail->next = nodesList[pos];
            cout << "Cycle successfully created!" << endl;
        } else {
            cout << "Invalid position! Cycle not created." << endl;
        }
    }

    cout << "\n--- Result ---" << endl;
  
    if (detectCycle(head)) {
        cout << "The linked list has a cycle." << endl;
        int startValue = findCycleStart(head);
        cout << "Starting point of cycle is: " << startValue << endl;
    } else {
        cout << "The linked list does not have a cycle." << endl;
    }

    return 0;
}

