#include <iostream>
using namespace std;

 class Node{
    public:
        int val;
        Node *prev;
        Node *next;

    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
 };

 class doublyLL{
    public:
        Node *head;
        Node *tail;

    doublyLL(){
        head = NULL;
        tail = NULL;
    }

    void display(){
        
        Node *temp = head;
        while(temp != NULL){
            cout << temp -> val << " <-> ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }

    void insertAtStart(int val){

        Node *newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;

        return;
    }

    void insertAtEnd(int val){

        Node *newNode = new Node(val);
        if(tail == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        tail -> next = newNode;
        newNode -> prev= tail;
        tail = newNode;
        return;
    }
 };


 int main(){
    
    doublyLL dll;

    dll.insertAtStart(1);
    dll.display();
    dll.insertAtStart(2);
    dll.display();
    dll.insertAtStart(3);
    dll.display();
    dll.insertAtStart(4);
    dll.display();

    dll.insertAtEnd(5);
    dll.display();

    return 0;
 }