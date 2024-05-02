#include <iostream>
#include <climits>

using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};

class Stack{
    Node *head;
    int capacity;
    int currSize;

    public:
        Stack(int capacity){
            this -> capacity = capacity;
            this -> currSize = 0;
            head = NULL;
        }

        bool isEmpty(){
            
            if(head == NULL){
                return true;
            }

            return false;
        }

        bool isFull(){

            if(currSize == capacity){
                return true;
            }

            return false;
        }

        void push(int data){

            if(currSize == capacity){
                cout << "Overflow!" << endl;
                return;
            }

            Node *newNode = new Node(data);

            newNode -> next = head;
            head = newNode;
            currSize ++;
        }

        int pop(){

            if(head == NULL){
                cout << "Underflow!" << endl;
                return INT_MIN;
            }

            Node *temp = head -> next;
            head -> next = NULL;

            Node *toBeRemoved = head;
            int result = toBeRemoved -> data;

            delete toBeRemoved;
            head = temp;

            currSize --;
            return result;
        }

        void getTop(){

            if(head == NULL){
                cout << "Underflow!" << endl;
            }
            else{
                cout << "The top element is: " << head -> data << endl;
            }
        }

        void getSize(){
            
            if(head == NULL){
                cout << "Your Stack is Underflow Condition!" << endl;
                return;
            }
            else{
                cout << "Your Stack Size is: " << currSize << endl;
            }
        }
};

int main(){

    Stack st(5);

    cout << endl;

    st.push(5);
    st.push(10);
    st.push(15);
    st.push(20);
    st.push(25);

    st.pop();

    st.getSize();
    st.getTop();


    cout << st.isEmpty() << endl;
    cout << st.isFull() << endl;


    cout << endl;

    return 0;
}