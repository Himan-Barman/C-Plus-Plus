#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5, k = 4;                // k is position of vlaue from end

    // k can be grater than size
    k = k % size;

    int ansArr[size];
    int j = 0;

    for (int i = size - k; i < size; i++){
        ansArr[j] = arr[i];
        j++;
    }


    for (int i = 0 ; i < size - k; i++){
        ansArr[j] = arr[i];
        j++;
    }

    cout << "The Final Array is: ";
    for (int i = 0; i < size; i++){
        cout << ansArr[i] << " ";
    }
    cout << endl;

    return 0;
}

