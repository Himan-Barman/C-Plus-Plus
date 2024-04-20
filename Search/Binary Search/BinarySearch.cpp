#include <iostream>
using namespace std;

int main(){
    int size, num;
    bool found = false;

    cout << "Enter the size of the Array: ";
    cin >> size;


    int array[size];

    cout << endl << "Enter the Array element: " << endl;
    for (int i = 0; i < size; i++){
        cin >> array[i];
    }

    cout << endl << "Enter searching element: ";
    cin >> num;

    int  low = 0, high = size -1, mid;

    while (low <= high){
        mid = (low + high) / 2;

        if (num == array[mid]){
            found = true;
            break;
        }
        else{
            if (num < array[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
    }

    cout << endl;

    if (found){
        cout << "Data is found.";
    }
    else{
        cout << "Data is not found!";
    }

    cout << endl;

    return 0;
}