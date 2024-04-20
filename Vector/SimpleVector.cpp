#include <iostream>
#include <vector>
using namespace std;

// input Syntax, how change cpacity in term of changing size in VECTOR
// it is not necessery to size and capacity are same 

int main(){
    vector <int> newVector;

    cout << "Size: " << newVector.size() << endl;
    cout << "Capacity: " << newVector.capacity() << endl;

    newVector.push_back(1);

    cout << "Size: " << newVector.size() << endl;
    cout << "Capacity: " << newVector.capacity() << endl;

    newVector.push_back(1);

    cout << "Size: " << newVector.size() << endl;
    cout << "Capacity: " << newVector.capacity() << endl;

    newVector.push_back(1);

    cout << "Size: " << newVector.size() << endl;
    cout << "Capacity: " << newVector.capacity() << endl;

    newVector.push_back(1);

    cout << "Size: " << newVector.size() << endl;
    cout << "Capacity: " << newVector.capacity() << endl;

    newVector.push_back(1);

    cout << "Size: " << newVector.size() << endl;
    cout << "Capacity: " << newVector.capacity() << endl;

    newVector.push_back(1);

    cout << "Size: " << newVector.size() << endl;
    cout << "Capacity: " << newVector.capacity() << endl;

    newVector.push_back(1);

    cout << "Size: " << newVector.size() << endl;
    cout << "Capacity: " << newVector.capacity() << endl;

    newVector.resize(10);
    cout << "Size: " << newVector.size() << endl;
    cout << "Capacity: " << newVector.capacity() << endl;

    return 0;
}