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


// Approch 1
Node *reverseLinkedList(Node *head){

    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    
    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}


// Approach 2
void reverseLinkedList1(Node *&head, Node *curr, Node *prev){

    // base case
    if(curr == NULL){
        head = prev;
        return;
    }

    Node *forward = curr -> next;
    reverseLinkedList1(head, forward, curr);
    curr -> next = prev;
}


// Approach 3
Node *reverseLinkedList2(Node *head){

    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node *nextHead = reverseLinkedList2(head -> next);

    head -> next -> next = head;
    head -> next = NULL;

    return nextHead;
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


    // Using loop
    head = reverseLinkedList(head);
    print(head);

    // recursive 
    Node *curr = head;
    Node *prev = NULL;
    reverseLinkedList1(head, curr, prev);
    print(head);


    // recursive1
    head = reverseLinkedList2(head);
    print(head);


    return 0;
}