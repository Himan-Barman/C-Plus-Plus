#include <iostream>
using namespace std;

int main(){
    int size, num, count = 0;
    bool found = false;

    cout << "Enter the Size of Array: ";
    cin >> size;

    int array[size];

    cout << "Enter the Array element: " << endl;
    for (int i = 0; i < size; i++){
        cin >> array[i];
    }

    cout << "Enter searching element: ";
    cin >> num;

    for (int i = 0; i < size; i++){
        if (num == array[i]){
            found = true;
            count ++;
        }
    }

    cout << endl;

    if (found){
        cout << "The number " << num << " found " << count << " times." << endl;
    }
    else{
        cout << "The element is not found!" << endl;
    }

    cout << endl;

    return 0;
}