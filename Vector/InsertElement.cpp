#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {2, 4, 3, 9, 0, 6, 5, 4, 7, 8};

    int element = 1;
    int index = 3;

    vec.insert(vec.begin() + index, element);  // syntax: vector_name.insert(index, element);

    cout << endl << "Final vector is: ";
    for (int i : vec){
        cout << i << "  ";
    }

    return 0;
}