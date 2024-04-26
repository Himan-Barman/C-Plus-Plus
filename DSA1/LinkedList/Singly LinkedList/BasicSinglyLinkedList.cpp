#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int val){
        this -> data = val;
        this -> next = NULL;
    }

    // destructor
    ~Node(){
        int val = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << endl << "~The memory is free for Node with data " << val << endl << endl;
    }
};

void insertAtHead(Node *&head, int val){

    Node *temp = new Node(val);

    temp -> next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int val){

    Node *newNode = new Node(val);
    
    tail -> next = newNode;
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int val){

    if(position == 1){
        insertAtHead(head, val);
        return;
    }

    Node *temp = head;
    int count = 1;
    
    while(count < position - 1){
        temp = temp -> next;
        count ++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, val);
        return;
    }

    Node *newNode = new Node(val);

    newNode -> next = temp -> next;
    temp -> next = newNode;

}

void deleteNode(Node *&head, int position){

    // deleteing first node 
    if(position == 1){
        Node *temp = head;
        head = head -> next;

        // memory free
        temp -> next = NULL;
        delete temp;
    }

    else{
        // deleting any node without start node 

        Node *curNode = head;
        Node *prevNode = NULL;
        int count = 1;

        while (count < position){
            prevNode = curNode;
            curNode = curNode -> next;
            count ++;
        }

        prevNode -> next = curNode -> next;
        curNode -> next = NULL;
        delete curNode;
    }
}

void print(Node *head){

    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    Node *newNode = new Node(5);

    cout << newNode -> data << endl;
    // cout << newNode -> next << endl;

    Node *head = newNode;
    Node *tail = newNode;

    insertAtHead(head, 10);
    print(head);
    insertAtHead(head, 15);
    print(head);

    insertAtTail(tail, 20);
    print(head);
    insertAtTail(tail, 25);
    print(head);

    insertAtPosition(head, tail, 3, 30);
    print(head);
    insertAtPosition(head, tail, 7, 35);
    print(head);
    insertAtPosition(head, tail, 8, 40);
    print(head);

    deleteNode(head, 5);
    print(head);














    return 0;
}