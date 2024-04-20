#include <iostream>
using namespace std;

int main(){
    int i = 5;
    int &j = i;

    cout << "The value of i is: " << i << endl;

    cout << endl << endl;

    cout << "The value of i is: " << j << endl;

    cout << endl << endl;

    i++;

    cout << "The value of i is: " << i << endl;

    cout << endl << endl;

    j++;

    cout << "The value of i is: " << i << endl;

    cout << endl << endl;

    return 0;
}