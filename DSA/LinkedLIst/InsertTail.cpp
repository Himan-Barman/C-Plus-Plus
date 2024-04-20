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

// To insert the node at the head
void insertAtHead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node -> next = head;
    head = new_node;
}

// To insert the node at the tail
void insertAtTail(Node* &head, int val){
    Node* new_node = new Node(val);
    
    Node* temp = head;
    while (temp -> next != NULL){
        temp = temp -> next;
    }

    // temp has reached last node 
    temp -> next = new_node;
}

// To display all node 
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
    insertAtTail(head, 6);
    Display(head);
    insertAtTail(head, 2);
    Display(head);

    return 0;
}