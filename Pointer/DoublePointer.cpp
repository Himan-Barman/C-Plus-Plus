#include <iostream> 
using namespace std;

int main(){
    int num = 8;
    int *ptr = &num;
    int **ptr1 = &ptr;

    cout << "Printing ptr: " << ptr << endl;
    cout << "Printing ptr: " << *ptr1 << endl;

    cout << endl << endl;

    cout << "The value of num is: " << num << endl;
    cout << "The value of num is: " << *ptr << endl;
    cout << "The value of num is: " << **ptr1 << endl;

    cout << endl << endl;

    cout << "The location of num or value of ptr is: " << &num << endl;
    cout << "The location of num or value of ptr is: " << ptr << endl;
    cout << "The location of num or value of ptr is: " << *ptr1 << endl;

    cout << endl << endl;

    cout << "The location of ptr is: " << &ptr << endl;
    cout << "The location of ptr is: " << ptr1 << endl;

    cout << endl << endl;




    return 0;
}