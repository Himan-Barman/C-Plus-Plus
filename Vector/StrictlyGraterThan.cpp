// treverse started from the begining of vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {2, 4, 3, 2, 5, 7, 1, 2, 9, 6, 2};

    int num = 2; // this element's last position we want to find
    int count = 0;

    cout << "The Final Vector is: ";
    for (int i : vec){

        if (i > num){
            cout << i << "  ";
        }
    }

    return 0;
}