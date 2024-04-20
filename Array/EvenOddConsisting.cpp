// All the even numbers are left side and odd numbers are right side

#include <iostream>
 using namespace std;

 int main(){
    int array[] = {1, 3, 9, 4, 6, 8, 9, 3, 5};
    int size = 9, fast = 0, last = size - 1;

    while (fast < last){
        if ((array[fast] % 2 != 0 && array[last] % 2) == 0){
            if (array[fast] % 2 != 0){
                swap(array[fast++], array[last--]);
            }
            else{
                swap(array[last--], array[fast++]);
            }
        }

        if (array[fast] % 2 == 0){
            fast++;
        }

        if (array[last] % 2 != 0){
            last--;
        }
    }

    cout << "The final array is: ";
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    cout << endl;

    return 0;
 }