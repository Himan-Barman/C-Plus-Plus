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

#include <unordered_set>

void deleteDuplicate(Node *&head) {
    unordered_set<int> seen;
    Node *curNode = head;
    Node *prevNode = nullptr;

    while (curNode != nullptr) {
        if (seen.find(curNode->val) != seen.end()) {
            // Duplicate node found, delete it
            prevNode->next = curNode->next;
            delete curNode;
            curNode = prevNode->next; // Move to the next node
        } else {
            // Not a duplicate, add it to the set and move forward
            seen.insert(curNode->val);
            prevNode = curNode;
            curNode = curNode->next;
        }
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

    deleteDuplicate(ll.head);
    ll.display();


    return 0;
}