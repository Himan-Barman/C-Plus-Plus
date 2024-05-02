#include <iostream> 
#include <vector>
using namespace std;

class Queue{
    int front;
    int back;
    vector<int> v;

    public:
        Queue(){
            this -> back = -1;
            this -> front = -1;
        }

    void enqueue(int data){

        this -> v.push_back(data);
        this -> back ++;

        if(back == 0){
            front = 0;
        }
    }

    void deQueue(){

        if(front == back){
            front = -1;
            back = -1;
            v.clear();
        }
        else{
            cout << v[front] << " is deleted!" << endl;
            v[front] = 0;

            front ++;
        }
    }

    void getFront(){
        
        if(front = -1){
            cout << "The Queue is Empty!" << endl;
            return;
        }

        cout << "The Front Value is: " << v[front] << endl;
    }

    void isEmpty(){

        if(front == -1){
            cout << "The Queue is Empty!" << endl;
            return;
        }

        cout << "The Queue is not Empty!" << endl;
    }

    void print(){
        
        if(front == -1){
            cout << "The Queue is Empty!" << endl;
            return;
        }

        int temp = front;

        cout << "Your Queue is: ";
        while(temp <= back){
            cout << v[temp] << " ";
            temp ++;
        }

        if(temp > back){
            temp = back;
        }

        cout << endl;
    }

};

int main(){

    Queue qu;

    qu.enqueue(10);
    qu.print();
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.enqueue(50);
    qu.print();
    qu.deQueue();
    qu.print();
    qu.deQueue();
    qu.print();
    qu.enqueue(60);
    qu.print();



    return 0;
}