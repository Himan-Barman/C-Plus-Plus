// Given 2 numbers a and b. Find a raise to the power b.

#include <iostream>
using namespace std;

int main(){
    int a, b, result = 1;

    cout << "Enter the Number: ";
    cin >> a;

    cout << "Enter the Power Number: ";
    cin >> b;

    for (int i = 0; i < b; i++){
        result *= a;
    }

    cout << "The raise of number " << a << " is " << result << endl;

    return 0;
}