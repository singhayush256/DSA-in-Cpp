#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int getLength(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void printMiddle(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "Middle element is: " << slow->data << endl;
}

void search(Node* head, int key) {
    Node* temp = head;
    int pos = 1;
    while (temp != NULL) {
        if (temp->data == key) {
            cout << key << " found at position " << pos << endl;
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout << key << " not found in the list." << endl;
}

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* current = head;
    Node* nextNode = NULL;
    
    while (current != NULL) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    return prev;
}

// 7. Insertion functions
Node* insertAtHead(Node* head, int value) {
    Node* newNode = createNode(value);
    newNode->next = head;
    return newNode;
}

Node* insertAtTail(Node* head, int value) {
    Node* newNode = createNode(value);
    if (head == NULL) {
        return newNode;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

Node* insertAtPosition(Node* head, int pos, int value) {
    if (pos == 1) {
        return insertAtHead(head, value);
    }
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Position out of bounds!" << endl;
        return head;
    }
    Node* newNode = createNode(value);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

// 8. Deletion functions
Node* deleteAtHead(Node* head) {
    if (head == NULL) return NULL;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deleteAtTail(Node* head) {
    if (head == NULL) return NULL;
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

Node* deleteAtPosition(Node* head, int pos) {
    if (head == NULL) return NULL;
    if (pos == 1) {
        return deleteAtHead(head);
    }
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        cout << "Position out of bounds!" << endl;
        return head;
    }
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
    return head;
}

int main() {
    Node* head = NULL;
    int n, val, choice;

    cout << "Enter the number of nodes to create: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> val;
        head = insertAtTail(head, val);
    }

    cout << "\n--- Initial Linked List ---" << endl;
    display(head);

    cout << "\nTotal number of nodes (Length): " << getLength(head) << endl;

    printMiddle(head);

    int searchKey;
    cout << "\nEnter element to search: ";
    cin >> searchKey;
    search(head, searchKey);

    int insVal, insPos;
    cout << "\nEnter value and position to insert: ";
    cin >> insVal >> insPos;
    head = insertAtPosition(head, insPos, insVal);
    cout << "List after insertion: ";
    display(head);

    int delPos;
    cout << "\nEnter position to delete: ";
    cin >> delPos;
    head = deleteAtPosition(head, delPos);
    cout << "List after deletion: ";
    display(head);

    cout << "\nReversing the list..." << endl;
    head = reverseList(head);
    cout << "Final Reversed List: ";
    display(head);

    return 0;
}
