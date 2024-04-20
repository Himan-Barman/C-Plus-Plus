#include <iostream>
using namespace std;

void update(int num){ // pass by value
    num++;
}

void update1(int &num){ // num as a reference variable
    num++;
}

int main(){
    int num = 5;

    cout << endl << endl;
    cout << "Before changing value: " << num << endl;
    update(num);
    cout << "After changing value: " << num << endl;

    cout << endl << endl;

    cout << "Before changing value: " << num << endl;
    update1(num);
    cout << "After changing value: " << num << endl;



    cout << endl << endl;

    return 0;
}