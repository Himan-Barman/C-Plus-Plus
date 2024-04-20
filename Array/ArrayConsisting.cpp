// Sort an Array consisting of only 0s and 1s

#include <iostream>
using namespace std;

int main(){
    int size = 8, count = 0;
    int array[size] = {1, 0, 1, 1, 0, 0, 1, 0};

    for (int i = 0; i < size; i++){
        if (array[i] == 0){
            count ++;
        }
    }

    for (int i = 0; i < size; i++){
        if (i < count){
            array[i] = 0;
        }
        else{
            array[i] = 1;
        }
    }

    cout << "The final array is: ";
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    cout << endl;

    return 0;
}