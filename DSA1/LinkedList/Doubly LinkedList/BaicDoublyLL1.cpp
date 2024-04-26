#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *prev;
        Node *next;

    Node(int val){
        this -> data = val;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int val){

    if(head == NULL){
        Node *temp = new Node(val);
        head = temp;
        tail = temp;
    }
    else{
        Node *newNode = new Node(val);

        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int val){

    if(tail == NULL){
        Node *temp = new Node(val);
        head = temp;
        tail = temp;
    }
    else{
        Node *newNode = new Node(val);

        tail -> next = newNode;
        newNode -> prev = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node *&tail, Node *&head, int val, int position){
    
    if(position == 1){
        insertAtHead(head, tail, val);
        return;
    }

    Node *temp = head;
    int count = 1;

    while(count < position - 1){
        temp = temp -> next;
        count ++;
    }

    if(temp -> next == NULL){
        insertAtTail(head, tail, val);
        return;
    }

    Node *newNode = new Node(val);

    newNode -> next = temp -> next;
    temp -> next -> prev = newNode;
    temp -> next = newNode;
    newNode -> prev = temp;
}

void print(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int getLength(Node *head){
    int length = 0;
    Node *temp = head;

    while(temp != NULL){
        length ++;
        temp = temp -> next;
    }

    return length;
}

int main(){

    Node *newNode = new Node(10);
    Node *head = newNode;
    Node *tail = newNode;


    print(head);
    
    cout << getLength << endl;

    insertAtHead(head, tail, 20);
    print(head);
    insertAtHead(head, tail, 30);
    print(head);
    insertAtHead(head, tail, 40);
    print(head);

    insertAtTail(head, tail, 50);
    print(head);
    insertAtTail(head, tail, 60);
    print(head);

    insertAtPosition(tail, head, 60, 2);
    print(head);
    insertAtPosition(tail, head, 70, 7);
    print(head);
    insertAtPosition(tail, head, 80, 1);
    print(head);
    insertAtPosition(tail, head, 90, 5);
    print(head);

    cout << getLength(head) << endl;




    return 0;
}