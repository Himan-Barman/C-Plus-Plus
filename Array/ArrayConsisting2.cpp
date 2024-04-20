// Sort an Array consisting of only 0s and 1s

#include <iostream>
using namespace std;

int main(){
    int size = 8, count = 0;
    int array[size] = {1, 0, 1, 1, 0, 0, 1, 0};
    int fast = 0, last = size - 1;

    for (int i = 0; i < size; i++){
        if (array[i] == 0){
            array[fast] = 0;
            fast ++;
        }
        else{
            array[last] = 1;
            last --;
        }
    }

    cout << "The final array is: ";
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    cout << endl;

    return 0;
}