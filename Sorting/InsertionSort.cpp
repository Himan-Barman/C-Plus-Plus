#include <iostream>
using namespace std;

int main(){
    int size = 10;
    int arr[size] = {3, 5, 7, 8, 9, 1, 0, 5, 2, 6};

    for(int i = 1; i < size; i++){
        int temp = arr[i], j;

        for(j = i - 1; j >= 0; j--){

            if(arr[j] > temp){
                arr[j + 1] = arr[j];
            }
            else{
                break;
            }
        }

        arr[j + 1] = temp;
    }

    cout << "The Array is: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << "  ";
    }

    return 0;
}