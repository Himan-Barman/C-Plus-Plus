// Without Using Swap Function

// #include <iostream>
// using namespace std;

// int main(){
//     int size = 10, temp;
//     int arr[size] = {6, 8, 1, 3, 5, 0, 9, 3, 7, 2};
//     int n = size - 1;

//     for(int i = 0; i < size / 2; i++){
//         temp = arr[i];
//         arr[i] = arr[n];
//         arr[n] = temp;

//         n--;
//     }

//     cout << "The Reverse Array is: ";
//     for(int i = 0; i < size; i++){
//         cout << arr[i] << "  ";
//     }

//     cout << endl;

//     return 0;
// }





// Uisng Swap Function:

#include <iostream>
using namespace std;

int main(){
    int size = 10;
    int arr[size] = {6, 8, 1, 3, 5, 0, 9, 3, 7, 2};
    int start = 0, end = size - 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }

    cout << "The Reverse Array is: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << "  ";
    }

    cout << endl;

    return 0;
}