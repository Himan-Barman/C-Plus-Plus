#include <iostream>
using namespace std;

int main(){
    int size = 10;
    int arr[size] = {3, 5, 7, 8, 9, 1, 0, 5, 2, 6};
    bool swaped = false;

    for(int i = 1; i < size; i++){
        for(int j = 0; j < size - i; j++){
            
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swaped = true;
            }
        }

        if(swaped == false){
            break;
        }
    }
        
    cout << "The Array is: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << "  ";
    }

    return 0;
}