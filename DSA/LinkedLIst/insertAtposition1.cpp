#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void insertAtPosition(Node* &head, int position, int val) {
    if (position < 1) {
        cout << "Invalid position" << endl;
        return;
    }

    Node* new_node = new Node(val);
    if (position == 1 || head == nullptr) {
        new_node->next = head;
        head = new_node;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds" << endl;
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

void Display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

    insertAtPosition(head, 1, 9);
    Display(head);
    insertAtPosition(head, 2, 8);
    Display(head);
    insertAtPosition(head, 1, 7);
    Display(head);
    insertAtPosition(head, 4, 6);
    Display(head);
    insertAtPosition(head, 3, 5);
    Display(head);

    return 0;
}
