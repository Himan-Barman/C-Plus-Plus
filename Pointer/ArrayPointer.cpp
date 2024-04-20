#include <iostream>
using namespace std;

int main(){
    int arr[10];

    cout << "Address of first memory block is: " << arr << endl;
    cout << "Address of first memory block is: " << &arr << endl;
    cout << "Address of first memory block is: " << &arr[0] << endl;

    cout << endl << endl;

    int arr1[10] = {2, 8, 5, 4, 3, 6, 0, 2, 4, 7};

    cout << "Address of first memory block is: " << arr1 << endl;
    cout << "The value of 0th index is: " << arr1[0] << endl;
    cout << "The value of 0th index is: " << *arr1 << endl; // this is always print first value
    cout << "The value of 1st index is: " << *(arr1 + 1) << endl;

    cout << endl << endl;

    cout << "Add 1 with 0th index value: " << *(arr1) + 1 << endl;
    cout << "Add 1 with 0th index value: " << *arr1 + 1 << endl;

    // this is wrong
    // cout << "The value of 1st index is: " << *arr[0] << endl;

    return 0;
}