// treverse started from the begining of vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {1, 2, 1, 2, 1, 2};

    vec.clear();

    cout << "The vector is: ";
    for (int i : vec){
        cout << i << "    ";
    }

    return 0;
}