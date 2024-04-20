// Write a program to calculate the absolute value of every element of an array 

#include <iostream>
using namespace std;

int main(){
    int array[] = {-20, 8, -6, -8, -23, -98, -56, 7, 58};
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

    return 0;
}