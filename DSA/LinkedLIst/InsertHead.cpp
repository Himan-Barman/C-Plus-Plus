#include <iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next;

    Node(int data){
        value = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node -> next = head;
    head = new_node;
}

void Display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> value << "->";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = NULL;

    insertAtHead(head, 2);
    Display(head);
    insertAtHead(head, 3);
    Display(head);

    return 0;
}