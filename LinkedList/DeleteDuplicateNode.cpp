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

class LinkedList{
    public:
        Node *head;

    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int value){
        Node *newNode = new Node(value);

        if(head == NULL){
            head = newNode;
            return;
        }

        Node *temp = head;
        while (temp -> next != NULL){
            temp = temp -> next;
        }

        temp -> next = newNode;
    }

    void display(){
        Node *temp = head;

        while(temp != NULL){
            cout << temp -> val << " -> ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
};

void deleteDuplicateNode(Node *&head){
    Node *curNode = head;

// First Way

    // while (curNode != NULL && curNode->next != NULL) {
    //     if (curNode->val == curNode->next->val) {
    //         Node *temp = curNode->next;
    //         curNode->next = curNode->next->next;
    //         delete temp;
    //     } else {
    //         curNode = curNode->next;
    //     }
    // }


// Second Way

    while(curNode != NULL){
        while(curNode -> next != NULL && curNode -> val == curNode -> next -> val){
            Node *temp = curNode -> next;
            curNode -> next = curNode -> next -> next;
            free(temp);
        }
        curNode = curNode -> next;
    }
}

int main(){
    LinkedList ll;

    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(4);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(6);
    ll.insertAtTail(4);

    ll.display();

    // deleteAlternate(ll.head);
    // ll.display();

    deleteDuplicateNode(ll.head);
    ll.display();


    return 0;
}