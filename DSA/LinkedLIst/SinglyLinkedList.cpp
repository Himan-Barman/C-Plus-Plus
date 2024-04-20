#include <iostream>
#include <string>
using namespace std;

class Node {
    public:
        int value;
        Node* next;

    Node (int data){
        value = data;
        next = NULL;
    }
};

int main(){
    Node* obj1 = new Node(5);

    cout << obj1 -> value << "  " << obj1 -> next << endl;

    return 0;
}