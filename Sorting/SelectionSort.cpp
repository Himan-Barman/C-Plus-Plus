#include <iostream>
using namespace std;

int main(){
    int size = 10;
    int arr[size] = {3, 5, 7, 8, 9, 1, 0, 5, 2, 6};

    for(int i = 0; i < size; i++){
        int min = i;

        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }

    cout << "The Array is: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << "  ";
    }

    return 0;
}