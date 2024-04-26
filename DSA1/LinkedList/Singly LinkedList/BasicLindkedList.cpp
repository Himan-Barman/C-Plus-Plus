#include <iostream>
using namespace std;

struct Node{
    public: 
        int data;
        Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int value){

    Node *newNode = new Node(value);
    newNode -> next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int value){

    Node *newNode = new Node(value);
    Node *temp = head;

    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = newNode;
}

void insertAtPosition(Node* &head, int position, int value){

    Node *newNode = new Node(value);

    Node *temp = head;
    int curPos = 0;

    while (curPos != position - 1){
        temp = temp -> next;
        curPos++;
    }

    newNode -> next = temp -> next;
    temp -> next = newNode;
}

void display(Node* &head){
    
    Node *temp = head;
    while(temp != NULL){
        cout << temp -> data << " -> " ;
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}


int main(){
    Node *head = NULL;

    insertAtHead(head, 6);
    display(head);
    insertAtHead(head, 5);
    display(head);
    insertAtTail(head, 8);
    display(head);
    insertAtTail(head, 9);
    display(head);
    insertAtPosition(head, 2, 0);
    display(head);
    insertAtPosition(head, 4, 1);
    display(head);

    return 0;
}