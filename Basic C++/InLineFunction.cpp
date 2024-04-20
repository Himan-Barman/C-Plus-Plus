#include <iostream>
using namespace std;

// inline function benifit: storage save

inline int getMax(int &a, int &b){
    return (a > b) ? a : b;
}

int main(){
    int a, b, result;

    cout << endl;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    cout << endl;

    result = getMax(a, b);

    cout << "The Max Value is: " << result << endl;
    cout << endl;

    return 0;
}