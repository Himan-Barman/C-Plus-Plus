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

Node *kReverse(Node *head, int k){

    if(head == NULL){
        return NULL;
    }

    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;

    int count = 0;

    while(curr != NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count ++;
    }

    if(next != NULL){
        head -> next = kReverse(next, k);
    }

    return prev;
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


    Node *reverseHead = kReverse(head, 2);
    print(reverseHead);

    return 0;
}