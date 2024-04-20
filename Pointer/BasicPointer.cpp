#include <iostream>
using namespace std;

int main(){
    int num = 50;
    cout << "The Number is: " << num << endl;
    cout << "The location of num is: " << &num << endl;

    int *ptr = &num;
    cout << "The number is: " << *ptr << endl;
    cout << "The location of num is: " << ptr << endl;

    cout << "Integer size: " << sizeof(num) << endl;
    cout << "Pointer size: " << sizeof(ptr) << endl;

    cout << "The location of ptr is: " << &ptr << endl;

    cout << endl << endl;

    // num++;
    // cout << "The Number is: " << *ptr << endl;

    *ptr++;
    cout << "The number is: " << *ptr << endl;

    int num1 = 5;
    int *ptr1 = &num1;

    cout << "Before num1: " << num1 << endl;
    (*ptr1)++;
    cout << "After num1: " << num1 << endl;


    //This is wrong practice
    // *ptr1++;
    // cout << "The value is: " << num1 << endl;

    cout << endl << endl;

    // copy pointer
    int *ptr2 = ptr1;
    cout << ptr1 << " - " << ptr2 << endl;
    cout << *ptr1 << " - " << *ptr2 << endl;

    cout << endl << endl;

    // Pointer increment
    int i = 3;
    int *q = &i;
    cout << *q++ << endl;

    cout << endl << endl;

    




















    return 0;
}