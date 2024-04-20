#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec;
    int size;

    cout << "Enter the size of Vector: ";
    cin >> size;

    cout << "\n" << "Enter the element in Vector: " << endl;
    for (int i = 0; i < size; i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }

    cout << endl << "The Vector is: ";
    for (int i = 0; i < size; i++){
        cout << vec[i] << " ";
    }

    // to delete the last element of the vector
    cout << "\n\n" << "After delete one element: ";
    vec.pop_back();

    for (int i : vec){
        cout << i << " ";
    }


    cout << "\n\n" << "After delete two element: ";
    vec.pop_back();

    for (int i : vec){
        cout << i << " ";
        
    }

    return 0;
}