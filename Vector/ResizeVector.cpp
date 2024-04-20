#include <iostream>
#include <vector>
using namespace std;

// How to do Resize of a Vector 

int main(){
    vector <int> newVector;

    cout << "Size: " << newVector.size() << endl;
    cout << "Capacity: " << newVector.capacity() << endl;

    newVector.push_back(1);

    cout << "Size: " << newVector.size() << endl;
    cout << "Capacity: " << newVector.capacity() << endl;

    newVector.resize(10);

    cout << "Size: " << newVector.size() << endl;
    cout << "Capacity: " << newVector.capacity() << endl;

    newVector.resize(20);

    cout << "Size: " << newVector.size() << endl;
    cout << "Capacity: " << newVector.capacity() << endl;

    return 0;
}   