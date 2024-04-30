#include <iostream>
#include <map>

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

void deleteNode(Node *&tail, int value){
    // empty node
    if(tail == NULL){
        cout << "~List is empty... try again..." << endl;
        return;
    }
    else{
        // non - empty
        Node *prev = tail;
        Node *curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        if(curr == prev){
            tail = NULL;
        }
        else if(tail == curr){
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;
    }
}

void print(Node *tail){

    Node *temp = tail;

    if(tail == NULL){
        cout << "~The list is empty..." << endl;
        return;
    }

    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
}

bool ditectLoop(Node *head){

    if(head == NULL){
        return false;
    }

    map <Node*, bool> visited;

    Node *temp = head;

    while(temp != NULL){
        if(visited[temp] == true){
            return true;
        }
        
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
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


    // deleteNode(tail, 5);
    // print(tail);

    if(ditectLoop){
        cout << "Loop is Present!" << endl;
    }
    else{
        cout << "Loop is not Present!" << endl;
    }
    cout << endl;

    return 0;
}