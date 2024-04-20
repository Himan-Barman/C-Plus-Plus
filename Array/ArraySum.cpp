#include <iostream>
using namespace std;

void sum(){
    int size, result = 0;

    cout << "Enter the Size of Array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the Array Element: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < size; i++ ){
        result += arr[i];
    }

    cout << "The Sum of Array Element is: " << result << endl;

}

    int main(){

    sum();

    return 0;

}