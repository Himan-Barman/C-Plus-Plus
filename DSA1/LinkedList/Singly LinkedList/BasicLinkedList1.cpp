#include <iostream>
using namespace std;

class Node{
    public:
        int val;
        Node *next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int data){
    Node *newNode = new Node(data);

    newNode -> next = head;
    head = newNode;
}

void insertAtTail(Node *&head, int data){
    Node *newNode = new Node(data);

    Node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = newNode;
}

void insertAtPosition(Node *&head, int data, int position){
    Node *newNode = new Node(data);

    Node *temp = head;
    if(position == 0){
        insertAtHead(head, data);
    }

    int curPos = 0;
    while(curPos != position - 1){
        temp = temp -> next;
        curPos ++;
    }

    newNode -> next = temp -> next;
    temp -> next = newNode;

}

void updateAtPosition(Node *&head, int data, int position){
    Node *newNode = new Node(data);

    Node *temp = head;
    int curPos = 0;
    while(curPos != position){
        temp = temp -> next;
        curPos ++;
    }

    temp -> val = data;
}

void deleteAtHead(Node *&head){
    Node *temp = head;

    head = head -> next;
    free(temp);
}

void deleteAtTail(Node *&head){
    Node *secondLast = head;
    
    while(secondLast -> next -> next != NULL){
        secondLast = secondLast -> next;
    }

    Node *temp = secondLast -> next;    // secondLast -> next = last Node
    secondLast -> next = NULL;
    free(temp);
}

void deleteAtPosition(Node *&head, int position){

    if(position == 0){
        deleteAtHead(head);
    }

    Node *prev = head;
    int curPos = 0;
    while(curPos != position - 1){
        prev = prev -> next;
        curPos++;
    }

    Node *temp = prev -> next;
    prev -> next = prev -> next -> next;
    free(temp);
}

void display(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp -> val << " -> ";
        temp = temp -> next;
    }

    cout << "NULL" << endl;
}

int main(){
    
    Node *head = NULL;
    insertAtHead(head, 1);
    display(head);
    insertAtHead(head, 2);
    display(head);
    insertAtTail(head, 5);
    display(head);
    insertAtTail(head, 9);
    display(head);
    insertAtPosition(head, 8, 2);
    display(head);
    updateAtPosition(head, 0, 3);
    display(head);
    updateAtPosition(head, 7, 0);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    deleteAtPosition(head, 2);
    display(head);

    return 0;
}
