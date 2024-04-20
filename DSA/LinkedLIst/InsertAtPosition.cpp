#include <iostream>
#include <string>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

void insertAtPosition(Node* head, int position, int val){
    Node* new_node = new Node(val);
    Node* temp = head;

    while(temp -> next != position){
        temp = temp -> next;
    }
    temp -> next = new_node;
}

void Display(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << "->";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = NULL;

    insertAtPosition(head, 1, 9);
    Display(head);
    insertAtPosition(head, 2, 9);
    Display(head);

    return 0;
}