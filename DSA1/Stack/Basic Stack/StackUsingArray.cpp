#include <iostream>
#include <climits>
using namespace std;

class Stack{
    private:
        int capacity;
        int *arr;
        int top;

    public:
        Stack(int capacity){
            this -> capacity = capacity;
            arr = new int[capacity];
            this -> top = -1;
        }


    void push(int data){

        if(top == capacity - 1){
            cout << "Stack is Overflow Condition!" << endl;
            return;
        }

        top ++;
        arr[top] = data;
    }


    int pop(){

        if(top == -1){
            cout << "Stack is Underflow Condition!" << endl;
            return INT_MIN;
        }

        arr[top] = 0;
        top --;
    }


    int getTop(){

        if(top == -1){
            cout << "Stack is Underflow Condition!" << endl;
            return INT_MIN;
        }

        return arr[top];
    }


    bool isEmpty(){
        
        if(top == -1){
            return true;
        }

        return false;
    }


    int size(){

        return top + 1;
    }


    bool isFull(){
        
        if(top == capacity - 1){
            return true;
        }

        return false;
    }

};

int main(){

    Stack st(5);

    st.push(5);
    st.push(10);
    st.push(15);

    cout << st.getTop() << endl;
    cout << st.isFull() << endl;

    st.pop();
    cout << "After delete a Stack" << endl;

    cout << st.getTop() << endl;
    cout << st.isFull() << endl;



    cout << endl;


    return 0;
}