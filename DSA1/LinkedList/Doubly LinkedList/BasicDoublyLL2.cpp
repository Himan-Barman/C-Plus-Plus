#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *prev;
        Node *next;

    Node(int val){
        this -> data = val;
        this -> prev = NULL;
        this -> next = NULL;
    }

};

int main(){

    return 0;
}