/*  Given an integer array a sorted in non-decreasing order, return an array of 
the squares of each number sorted in non-decreasing order.  */


#include <iostream>
using namespace std;

int main(){
    int array[] = {-2, 8, -6, -8, -3, -9, -5, 7, 5};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++){
        if (array[i] < 0){
            array[i] = - array[i];
        }
    }

    cout << "The final array is: ";
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < size; i++){
        
    }

    return 0;
}