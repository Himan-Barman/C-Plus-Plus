#include <iostream>
using namespace std;

int main(){
    int size1 = 5, size2 = 4, size = size1 + size2;
    int arr1[size1] = {4, 7, 8, 0, 3};
    int arr2[size2] = {2, 9, 5, 1};
    int arr3[size];

    for(int i = 0; i < size1; i++){
        arr3[i] = arr1[i];
    }

    for(int i = 0; i < size2; i++){
        arr3[size1 + i] = arr2[i];
    }

    cout << "The Merged Array is: ";
    for(int i = 0; i < size; i++){
        cout << arr3[i] << "  ";
    }

    cout << endl;

    return 0;
}