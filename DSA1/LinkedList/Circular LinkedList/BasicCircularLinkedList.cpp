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

    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }

        cout << endl << "~The memory is free for Node with data " << data << endl << endl;
    }
};

void insertNode(Node *&tail, int element, int data){
    // empty list
    if(tail == NULL){
        Node *newNode = new Node(data);
        tail = newNode;
        newNode -> next = newNode;
    }

    else{
        // non-empty list
        Node *curNode = tail;

        while(curNode -> data != element){
            curNode = curNode -> next;
        }

        // element found - curNode is represent element now
        Node *newNode = new Node(data);
        newNode -> next = curNode -> next;
        curNode -> next = newNode;
    }
}

void print(Node *tail){

    Node *temp = tail;
    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
}

int main(){

    Node *tail = NULL;

    insertNode(tail, 5, 5);
    print(tail);
    insertNode(tail, 5, 10);
    print(tail);
    insertNode(tail, 10, 15);
    print(tail);
    insertNode(tail, 15, 20);
    print(tail);
    insertNode(tail, 5, 25);
    print(tail);
    insertNode(tail, 15, 30);
    print(tail);










    return 0;
}