#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};


void insertAtHead(Node *&head, int val){

    Node *temp = new Node(val);

    temp -> next = head;
    head = temp;
}

int getLength(Node *&head){

    int length = 0;

    Node *temp = head;
    while(temp != NULL){
        length ++;
        temp = temp -> next;
    }

    return length;
}

Node *findMiddle1(Node *head){

    if(head == NULL || head -> next -> next == NULL){
        return head;
    }

    if(head -> next -> next == NULL){
        return head -> next;
    }

    Node *slow = head;
    Node *fast = head -> next;

    while(fast != NULL){
        fast = fast -> next;

        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;
    }

    return slow;
}

void findMiddle(Node *&head){

    int length = getLength(head);
    int middlePoint = length / 2;

    Node *temp = head;

    for(int i = 0; i < middlePoint; i++){
        temp = temp -> next;
    }
    
    cout << "The middle Node is: " << temp -> data << endl << endl;
}

void print(Node *head){

    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl << endl;
}

int main(){

    Node *head = NULL;

    insertAtHead(head, 5);
    print(head);
    insertAtHead(head, 10);
    print(head);
    insertAtHead(head, 15);
    print(head);
    insertAtHead(head, 20);
    print(head);
    insertAtHead(head, 25);
    print(head);
    insertAtHead(head, 30);
    print(head);


    findMiddle(head);


    Node *middle = findMiddle1(head);
    cout << "The Middle Node is: " << middle -> data << endl;

    return 0;
}