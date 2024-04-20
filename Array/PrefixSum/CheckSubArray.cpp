/*  Check if we can partition the array into two subarrays with equal sum. 
    More formally, check that the prefix jum of a part of the array is equal 
    to the suffix sum of rest of the earray. 
*/
// here we check to sub array is equal or not

#include <iostream>

using namespace std;

int main(){
    int size = 8, preFix = 0, sum = 0, result1 = 0;
    int array[size] = {8, 3, 4, 5, 2, 6, 9, 7};
    bool found = false;

    for (int i = 0; i < size; i++){
        sum += array[i];
    }


    if (sum % 2 != 0){
        cout << "Subarray is not possible." << endl;
        return 0;
    }

    int result = sum / 2;

    for (int i = 0; i < size; i++){
        result1 += array[i];
        
        if (result1 == result){
            found = true;
            break;
        }
    }

    if (found){
        cout << "Sub Array is possible." << endl;
    }
    else{
        cout << "Sub Array is not possible." << endl;
    }

    return 0;
}