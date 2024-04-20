#include <iostream>
using namespace std;

int largest(int arr[], int size){
    int max = 0;
    int maxIndex = -1;

    for (int i = 0; i < size; i++){
        if (arr[i] > max){
            max = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main(){
    int arr[] = {3, 7, 2, 8, 5, 4, 3, 9};
    int size = 8;

    int index = largest(arr, size);

    arr[index] = -1;
    int largest2 = largest(arr, size);

    cout << "The second largest number is: " << arr[index] << endl;

    return 0;
}

























// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int>  inputArray(int size){
//     vector <int> arr(size);

//     cout << "Enter the array element: ";
//     for (int i = 0; i < size; i++){
//         cin >> arr[i];
//     }
//     return arr;
// }

// int main(){
//     int size;

//     cout << "Enter the size of Array: ";
//     cin >> size;

//     vector<int> array = inputArray(size);

//     return 0;
// }