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
};

class Queue{
    Node *head;
    Node *tail;
    int size;

    public:
        Queue(){
            this -> head = NULL;
            this -> tail = NULL;
            size = 0;
        }

    void enqueue(int data){

        Node *newNode = new Node(data);

        if(head == NULL){
            // Linked list (Queue) is empty
            head = tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }

        size ++;
    }

    void dequeue(){

        if(head == NULL){
            // Linked list (Queue) is empty
            return;
        }
        else{
            Node *oldHead = head;
            Node *newHead = head -> next;

            head = newHead;

            if(head == NULL){
                tail = NULL;
            }

            oldHead -> next = NULL;
            delete oldHead;

            size --;
        }
    }

    void getSize(){
        cout << "The Size of Queue is: " << size << endl;
    }

    bool isEmpty(){

        if(head == NULL){
            return true;
        }
        return false;
    }

    void getFront(){

        if(head == NULL){
            cout << "The Queue is Empty!" << endl;
            return;
        }
        cout << "The Fornt element is: " << head -> data << endl;
    }

    void print(){

        if(isEmpty()){
            cout << "Queue is Empty!" << endl;
            return;
        }

        Node *current = head;
        cout << "Queue: ";

        while(current != NULL){
            cout << current -> data << " ";
            current = current -> next;
        }

        cout << endl;
    }
    
};

int main(){

    Queue qu;

    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.enqueue(50);

    cout << endl;

    qu.print();

    qu.dequeue();
    qu.print();
    qu.getFront();










    cout << endl;

    return 0;
}