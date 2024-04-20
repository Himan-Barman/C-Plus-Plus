/*  Given an integers array 'a', return the prefix sum/ running sum in the same 
    array without creating a new array . */

#include <iostream>
using namespace std;


// first way to calculate cumulative sum
// int main(){
//     int size = 5, result = 0;
//     int array[size] = {8, 6, 3, 9, 5};

//     cout << "The final result is: ";
//     for (int i = 0; i < size; i++){
//         if (i == 0){
//             result = array[i];
//             cout << result << " ";
//         }
//         else{
//             result += array[i];
//             cout << result << " ";
//         }
//     }

//     return 0;
// }


// second way to calculate cumulative sum
int main(){
    int size = 5, result = 0;
    int array[size] = {8, 6, 3, 9, 5};

    for (int i = 1; i < size; i++){
       array[i] += array[i - 1];
    }

    cout << "The final result is: ";
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}